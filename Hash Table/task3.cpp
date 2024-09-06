#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    size_t n;
    cin>>n;
    
    unordered_map<size_t,size_t> m;
    size_t minDist = 100000;
    
    for(size_t i=0;i<n;i++){
        size_t num;
        cin>>num;
        
        if(m.find(num)==m.end()){
            m[num]=i;
            //cout<<m[num]<<endl;
        }else{
            minDist=min(minDist,(i-m[num]));
        }
    }
    
    cout<<minDist;
    return 0;
}
