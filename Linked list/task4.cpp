#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    Node* previous;
    Node* next;
    int key;
    int val;
};

struct List
{
    Node* head = nullptr;
    Node* tail = nullptr;

    size_t count = 0;

    Node* push_front(int key, int val)
    {
        Node* toAdd = new Node{ nullptr, head, key,val };

        if (head != nullptr)
            head->previous = toAdd;

        if (tail == nullptr)
            tail = toAdd;

        head = toAdd;
        ++count;

        return head;
    }

    void erase(Node* node)
    {
        --count;

        if (node == head)
        {
            Node* newHead = head->next;
            delete head;
            head = newHead;
            if (head == nullptr)
                tail = nullptr;

            return;
        }

        if (node == tail)
        {
            Node* newTail = tail->previous;
            delete tail;
            tail = newTail;
            return;
        }

        node->previous->next = node->next;
        node->next->previous = node->previous;
        delete node;
    }

    size_t erase_back()
    {
        if (tail != nullptr)
        {
            --count;

            int key = tail->key;
            Node* newTail = tail->previous;
            delete tail;
            tail = newTail;

            if (tail == nullptr)
                head = nullptr;
            else
                tail->next = nullptr;

            return key;
        }

        return -1;
    }

    void move_front(Node* node)
    {
        if (node == head)
            return;

        if (node == tail)
        {
            Node* newTail = tail->previous;
            newTail->next = nullptr;
            tail->next = head;
            tail->previous = nullptr;
            head->previous = tail;
            head = tail;
            tail = newTail;
            return;
        }

        node->previous->next = node->next;
        node->next->previous = node->previous;
        node->next = head;
        node->previous = nullptr;
        head->previous = node;
        head = node;
    }

};

const size_t MAX_SIZE = 1e5;
Node* arr[MAX_SIZE];

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


    int n, t, k;
    std::cin >> t >> n >> k;

    List list;

    string command;
    int commands=0;
    for (int i = 0; i < n; i++)
    {
        commands++;
        std::cin >> command;
        if (command == "put") {
            int key;
            int val;
            cin >> key >> val;

            if (arr[key] != nullptr)
            {
                arr[key]->val = val;
                list.move_front(arr[key]);
            }
            else
            {
                if (list.count == t)
                    arr[list.erase_back()] = nullptr;

                arr[key] = list.push_front(key,val);
            }
        }
        else if (command == "get") {
            int key;
            cin >> key;
            if (arr[key] != nullptr)
            {
                cout<<arr[key]->val<<endl;
                list.move_front(arr[key]);
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        if(commands>=k){
            arr[list.erase_back()] = nullptr;
            commands=0;
        }
    }
}
