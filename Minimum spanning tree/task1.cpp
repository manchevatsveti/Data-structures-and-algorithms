#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

unordered_map <int,vector<int>> mp;
unordered_map <int,pair<bool,int>> visited;
int component =1;
int N,M;

void dfs(int v){
    visited[v] = {true,component};
    
    for(int temp : mp[v]){
        if(!visited[temp].first)dfs(temp);
    }
}

void traverse(){
    for(int i=1;i<=N;i++){
        if(!visited[i].first){
            dfs(i);
            component++;
        }
    }
}
void Union(int v1,int v2){
    int oldComp = visited[v1].second;
    int newComp = visited[v2].second;
    for(int i=1;i<=N;i++){
        if(visited[i].second==oldComp){
            visited[i].second=newComp;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N>>M;
    
    for(int i=0;i<M;i++){
        int from,to;
        cin>>from>>to;
        mp[from].push_back(to);
        mp[to].push_back(from);
    }
    
    int K;
    cin>>K;
    
    traverse();
    for(int i=0;i<K;i++){
        int q, from ,to;
        cin>>q>>from>>to;
        if(q==1){
            cout<<(visited[from].second==visited[to].second);
        }else if (q==2){
            if(visited[from].second!=visited[to].second){
                Union(from,to);
            }
        }
    }
    return 0;
}
