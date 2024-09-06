#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

unordered_map<char,vector<char>> adj;
unordered_map<char,int> indegree;
stack<char> st;
vector<bool> visited(100,false);

void add(string s1,string s2){
    int size = s1.size()<s2.size() ? s1.size() :s2.size();
    
    for(int i=0;i<size;i++){
            if(s1[i]!=s2[i]){
                adj[s1[i]].push_back(s2[i]);
                indegree[s1[i]];
                indegree[s2[i]]++;
                break;
        }
    }
}

void topoSort(char ch){
    if(!visited[ch - 'a']){
        visited[ch - 'a']=true;
        for(char temp : adj[ch]){
            if(!visited[temp])topoSort(temp);
        }
        st.push(ch); 
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    string s1;
    cin>>s1;
    
    for(int i=1;i<n;i++){
        string s2;
        cin>>s2;
        
        add(s1,s2);
        s1=s2;
    }
    
    for(auto& temp : indegree){
        if(temp.second == 0)topoSort(temp.first);
    }
    
    while(!st.empty()){
        char top = st.top();
        cout<<top<<" ";
        st.pop();
    }
    return 0;
}
