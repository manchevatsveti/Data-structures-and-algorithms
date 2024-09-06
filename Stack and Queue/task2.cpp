#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    vector<int> arr;
    arr.resize(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    stack<int> s;
    int result=0;
    
    for(int i=0;i<n;i++){
        if(s.empty() || arr[i]>=arr[s.top()]){
            s.push(i);
        }else{
            int temp=s.top();
            s.pop();
            
            if(s.empty()){
                result=max(result,arr[temp]*i);
            }else{
                result=max(result,arr[temp]*(i-s.top()-1));
            }
            i--;
        }
    }
    
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        
        if(s.empty()){
            result=max(result,arr[temp]*n);
        }else{
            result=max(result,arr[temp]*(n-s.top()-1));
        }
    }
    cout<<result;
    return 0;
}
