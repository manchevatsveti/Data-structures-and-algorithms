#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct Interval{
    size_t size;
    size_t arr;
    size_t dep;
    
    bool operator<(const Interval& other)const{
        return arr<other.arr || (arr==other.arr && dep<other.dep);
    }
};

struct Comparator{
     bool operator()(const Interval& i1,const Interval& i2){
         return i1.dep>i2.dep;
     }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    size_t n;
    cin>>n;
    
    for(size_t i=0;i<n;i++){
        size_t q,cap;
        cin>>q>>cap;
        vector<Interval> v;
        
        for(size_t j=0;j<q;j++){
            size_t cap,arr,dep;
            cin>>cap>>arr>>dep;
            v.push_back(Interval{cap,arr,dep});
        }
        
        sort(v.begin(),v.end());
        
        priority_queue<Interval,vector<Interval>,Comparator> pq;
        
        size_t counter=0;
        for(size_t i=0;i<q;i++){
            while(!pq.empty() && pq.top().dep<=v[i].arr){
                counter-=pq.top().size;
                pq.pop();
            }
            pq.push(v[i]);
            counter+=v[i].size;
            
            if(counter>cap)break;
        }
        
        if(counter>cap) cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
