#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

struct Friend{
    size_t arrival;
    size_t leaving;
    size_t indexInput;
    size_t indexChair = 0;
    
    bool operator<(const Friend& other){
       if(arrival==other.arrival) return leaving<other.leaving;
           
        return arrival<other.arrival;
    }
};

struct Comparator{
    bool operator()(const Friend& f1,const Friend& f2){
        return f1.leaving>f2.leaving;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    size_t n;
    cin>>n;
    vector<Friend> v;
    
    for(size_t i=0;i<n;i++){
        size_t x,y;
        cin>>x>>y;
        v.push_back({x,y,i});
    }
    
    size_t searchedID;
    cin>>searchedID;
    
    sort(v.begin(),v.end());
    
    // for(int i=0;i<n;i++){
    //     cout<<v[i].arrival<<" "<<v[i].leaving<<endl;
    // }
    
     priority_queue<Friend, vector<Friend>,Comparator> pq;
     priority_queue<size_t, vector<size_t>,greater<size_t>> indexQ;
    
    for(size_t i=0;i<n;i++){
        indexQ.push(i);
    }
    
    for(size_t i=0;i<n;i++){
        //if(!pq.empty())cout<<pq.top().leaving<<endl;
        while(!pq.empty() && pq.top().leaving<=v[i].arrival){
            indexQ.push(pq.top().indexChair);
            pq.pop();
        }
        
        if(v[i].indexInput==searchedID){
            cout<<indexQ.top();
            break;
        }
        
        if(v[i].arrival!=v[i].leaving){
            v[i].indexChair = indexQ.top();
            pq.push(v[i]);
            indexQ.pop();
        }
        
    }
    return 0;
}
