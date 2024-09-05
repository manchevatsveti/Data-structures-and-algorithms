#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const string S1 = "add", S2 = "gun", S3 = "milen";

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int n, Node* nodep = nullptr, Node* noden = nullptr) {
        data = n;
        next = noden;
        prev = nodep;
    }
};

class LinkedList {
public:
    Node* head;
    Node* mid;
    Node* tail;
    size_t size;

    LinkedList() {
        head = nullptr;
        mid = nullptr;
        tail = nullptr;
        size = 0;
    }

    ~LinkedList() {
        if (!size) return;
        Node* next;

        while (head) {
            next = head->next;
            delete head;
            head = next;
        }
    }

    void push_back(int n) {
        if (!head) {
            head = new Node(n);
            mid = tail = head;
        } else {
            tail->next = new Node(n, tail);
            tail = tail->next;
        }

        if (size >= 2) {
            if (size % 2 == 1) {
                mid = mid->next;
            }
        } else {
            mid = head;
        }
        size++;
    }

    void pop_back() {
        if (size == 0) return;

        if (size == 1) {
            delete head;
            head = tail = mid = nullptr;
            size = 0;
            return;
        }

        Node* prev = tail->prev;
        delete tail;
        tail = prev;
        prev->next = nullptr;

        if (size >= 2) {
            if (size % 2 == 0) {
                mid = mid->prev;
            }
        } else {
            mid = head;
        }
        size--;
    }

    void reorder() {
        if (size < 2) return;

        Node* temp = tail;

        head->prev = tail;
        tail->next = head;

        head = mid->next;
        tail = mid;

        head->prev = nullptr;
        tail->next = nullptr;

        mid = (size % 2) ? temp->prev : temp;
    }

    void print() {
        if (size == 0) return;
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    int getSize() {
        return size;
    }
};

int main() {
    LinkedList* list = new LinkedList();

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;

        if (s == S1) {
            int n;
            cin >> n;
            list->push_back(n);
        } else if (s == S2) {
            list->pop_back();
        } else if (s == S3) {
            list->reorder();
        }
    }
    cout << list->getSize() << endl;
    list->print();

    delete list;
    return 0;
}
