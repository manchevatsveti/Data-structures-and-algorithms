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
    
    vector<size_t> arr(n);
    for(size_t i=0;i<n;i++){
        cin>>arr[i];
    }
    
    stack<pair<size_t,size_t>> s;
    size_t maxDays=0;
    size_t tempDays=0;
    
    for(size_t i=0;i<n;i++){
        size_t temp = arr[i];
        tempDays=0;
        
        while(!s.empty() && s.top().first>=temp){
            tempDays = max(tempDays,s.top().second);
            s.pop();
        }
        if(!s.empty()){
            s.top().second = max(tempDays, s.top().second) + 1;
            maxDays = max(maxDays, s.top().second);
        }
        s.push({temp,0});
    }
    cout<<maxDays;
    return 0;
}
