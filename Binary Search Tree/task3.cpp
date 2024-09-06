#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const size_t MAX_SIZE = 4*1e6 +1;
struct Node{
    int val;
    Node* left;
    Node* right;
};

Node arr[MAX_SIZE];

int calculateLongestPathFromNode(Node* root){
    if(!root) return 0;
    
    int tempResult = max(calculateLongestPathFromNode(root->left),calculateLongestPathFromNode(root->right)) + root->val;
    
    if(tempResult<root->val) return root->val;
    else return tempResult;
}

int longestPathInTree(Node* root){
    if(!root) return 0;
    
    int left = calculateLongestPathFromNode(root->left)<0 ? 0 : calculateLongestPathFromNode(root->left);
    int right = calculateLongestPathFromNode(root->right)<0 ? 0 : calculateLongestPathFromNode(root->right);
    
    return root->val + left + right;
}

int result=-1000000;
void dfs(Node* root){
    if(!root) return;
    
    result = max(result,longestPathInTree(root));
    
    if(root->left) dfs(root->left);
    if(root->right) dfs (root->right);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    size_t n;
    cin>>n;
    
    for(size_t i=0;i<n;i++){
        int v;
        size_t left,right;
        cin>>v>>left>>right;
        arr[i].val = v;
        arr[i].left = left == -1 ? nullptr : &arr[left];
        arr[i].right = right == -1 ? nullptr : &arr[right];
    }
    dfs(arr);
    cout<<result;
    return 0;
}
