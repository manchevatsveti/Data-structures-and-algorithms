#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const size_t MAX_SIZE = 1e6;

struct Node{
    Node* left;
    Node* right;
};
Node arr[MAX_SIZE];

long long result = 0;
long long countNodes(Node* root){
    if(!root) return 0;
    
    return countNodes(root->left)+countNodes(root->right)+1;
}
void traverse(Node* root,int n){
    if(!root) return;
    
    long long leftCount = countNodes(root->left);
    long long rightCount = countNodes(root->right);
    long long oldTree = n-1-leftCount-rightCount;
    
    if(leftCount==0)leftCount=1;
    if(rightCount==0)rightCount=1;
    if(oldTree==0)oldTree=1;
    
    result = max(result, oldTree*leftCount*rightCount);
    
    if(root->left)traverse(root->left,n);
    if(root->right)traverse(root->right,n);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        size_t left,right;
        cin>>left>>right;
        arr[i].left = left == -1 ? nullptr : &arr[left];
        arr[i].right = right == -1 ? nullptr : &arr[right];
    }
    traverse(arr,n);
    cout<<result;
    return 0;
}
