#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
const int MAX = 200001;

struct Edge{
    int id;
    int from;
    int to;
    long long effort;
    long long profit;
    
    bool operator<(const Edge& other)const{
        if(effort==other.effort)return profit>other.profit;
        else return effort<other.effort;
    }
}edges[MAX];

int parents[MAX];

int findVert(int v){
    if(v==parents[v])return v;
    
    return parents[v] = findVert(parents[v]);
}

void unionVert(int from,int to){
    parents[from] = parents[to];
}

void kruskal(int N,int M){
    sort(edges,edges+M,less<Edge>());
    
    for(int i=0;i<=N;i++){
        parents[i]=i;
    }
    
    for(int i=0;i<M;i++){
        int first = findVert(edges[i].from);
        int second = findVert(edges[i].to);
        
        if(first!=second){
            cout<<edges[i].id<<endl;
            unionVert(first,second);
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N,M;
    cin>>N>>M;
    
    for(int i=0;i<M;i++){
        int from,to;
        long long effort,profit;
        cin>>from>>to>>effort>>profit;
        
        edges[i].id =i+1;
        edges[i].from = from;
        edges[i].to = to;
        edges[i].effort = effort;
        edges[i].profit = profit;
    }
    
    kruskal(N,M); 
    return 0;
}
