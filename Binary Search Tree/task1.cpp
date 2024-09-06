#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const size_t MAX_SIZE = 10000000;

struct Node{
    long long value;
    long long left;
    long long right;
 
};

Node arr[MAX_SIZE];
size_t posSum[MAX_SIZE] = {0};
size_t negSum[MAX_SIZE] = {0};

void traverse(Node* root, long long index=0){
    if(!root)return;
    
    if(index>=0){
        posSum[index]+=root->value;
    }else{
        negSum[abs(index)-1]+=root->value;
    }
    
    if (root->left != -1)
    traverse(arr+(root->left),index-1);
    
    if (root->right != -1)
    traverse(arr+(root->right),index+1);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i].value>>arr[i].left>>arr[i].right;
    }
    traverse(arr);
    
    for(int i=n-1;i>=0;i--){
        if(negSum[i]!=0)cout<<negSum[i]<<" ";
    }
    
    for(int i=0;i<n;i++){
        if(posSum[i]!=0)cout<<posSum[i]<<" ";
    }
    return 0;
}
