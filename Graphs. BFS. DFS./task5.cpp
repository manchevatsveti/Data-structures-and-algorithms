#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

unordered_map<int,vector<int>> arr;
unordered_map<int,bool> visited;

int bfs(int beg,int end){
    queue<int> q;
    q.push(beg);
    visited[beg]=true;
    
    int count = 0;
    
    int size =0;
    while(!q.empty()){
        size=q.size();
        
        for(int i=0;i<size;i++){
            beg = q.front();
            q.pop();

            for(int temp : arr[beg]){
                if(temp==end){
                    count++;
                    return count;
                }
                
                if(!visited[temp]){
                    q.push(temp);
                    visited[temp]=true;
                }
            }
        }
        count++;
    }
    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,M;
    cin>>N>>M;
    
    int temp = -1;
    for(int i=0;i<M;i++){
        int x,y,d;
        cin>>x>>y>>d;
        
        if(d==1){
            arr[x].push_back(y); 
            arr[y].push_back(x);
        }else if(d==2){
            arr[x].push_back(temp);
            arr[temp].push_back(x);
            
            arr[temp].push_back(y);
            arr[y].push_back(temp);
            temp--;
        }
    }
    
    int beg,end;
    cin>>beg>>end;
    
    cout<<bfs(beg,end);//1?? undericted 
    
    return 0;
}
