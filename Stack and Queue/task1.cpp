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
    
    deque<long long> pos;
    deque<long long> neg;
    long long x;
    
    bool passed=false;
    for(int i=0;i<n;i++){
        cin>>x;
        
        if(x>0){
            if(!neg.empty()){
                while(!neg.empty()){
                    cout<<neg.front()<<" ";
                    neg.pop_front();
                    passed=true;
                }
            }
            pos.push_back(x);
        }else if(x<0){
            neg.push_back(x);
            
            while(!neg.empty()&&!pos.empty()){
                if(abs(neg.front())>pos.back()){
                    pos.pop_back();
                }else if(abs(neg.front())<pos.back()){
                    neg.pop_front();
                }else if(abs(neg.front())==pos.back()){
                    pos.pop_back();
                    neg.pop_front();
                }
            }
        }
    }
    
        while(!pos.empty()){
            cout<<pos.front()<<" ";
            pos.pop_front();
            passed=true;
        }
        while(!neg.empty()){
            cout<<neg.front()<<" ";
            neg.pop_front();
            passed=true;
        }
    
    if(!passed){
        cout<<"\n";
    }
    
    return 0;
}
