#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    size_t n;
    cin>>n;
    set<size_t> s;
    
    size_t m;
    cin>>m;
    queue<size_t> q;
    
    for(size_t i=1;i<=n;i++){
        s.insert(i);
    }
    
    for(size_t i=0;i<m;i++){
        size_t num;
        cin>>num;
        q.push(num);
        s.erase(num);
    }
    
    auto it = s.begin();
    for(size_t i=0;i<n;i++){
        if(!q.empty() && it!=s.end()){
            if(q.front()<*it){
                cout<<q.front()<<" ";
                q.pop();
            }else{
                cout<<*it<<" ";
                it++;
            }
        }else if(q.empty() && it!=s.end()){
            cout<<*it<<" ";
            it++;
        }else if(!q.empty() && it==s.end()){
            cout<<q.front()<<" ";
            q.pop();
        }
    }
    
    return 0;
}
