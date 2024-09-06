#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>

using namespace std;   
unordered_map<int, vector<int>> mp;
unordered_map<int,bool> visited;
vector<int> groups;

int bfs(int v){
    int count =0;
    
    queue<int> q;
    q.push(v);
    visited[v] = true;
    
    while(!q.empty()){
        int size = q.size();
        
        for(int i=0;i<size;i++){
            int temp = q.front();
            //cout<<temp<<endl;
            q.pop();
            visited[temp]= true;
            
            if(temp!=v && groups[temp-1]==groups[v-1]){
                return count;
            }

            for(int n : mp[temp]){
                if(!visited[n])q.push(n);
            }  
        }
        
        count++;
    }
    return 0;     
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int N,M;
    cin>>N>>M;
    
    for(int i=0;i<M;i++){
        int x,y;
        cin>>x>>y;
        
        mp[x].push_back(y);
        mp[y].push_back(x);
        
        visited[x];
        visited[y];
    }
    
    for(int i=0;i<N;i++){
        int gr;
        cin>>gr;
        groups.push_back(gr);
    }
    
    int searched;
    cin>>searched;
    
    int minDist = 100000;
    int size = groups.size();
    for(int i=0;i<size;i++){
        if(groups[i] == searched){
            int res = bfs(i+1);
            if(res!=0)minDist = min(res,minDist);
            //cout<<endl;
            //cout<<i+1<<" "<<minDist<<endl;
        }
    }
    cout<<minDist;
    return 0;
}
