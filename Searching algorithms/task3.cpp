#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> arr;
int dev,teams;
long long bestcase=0;

bool enough(long long target){
    long long tempSum=0;
    long long teamsCount=1;
    
    for(int i=0;i<dev;i++){
        if(tempSum+arr[i]>target){
            teamsCount++;
            tempSum=0;
        }
        tempSum+=arr[i];
    }
    
    return teamsCount<=teams;
}
int main() {
    cin>>dev>>teams;
    arr.resize(dev);
    
    long long l=0,r=0;
    for (int i=0;i<dev;i++) {
        cin>>arr[i];
        if(arr[i]>l) l=arr[i];
        r+=arr[i];
    }
    
    while(l<=r){
        long long mid = l+(r-l)/2;
        
        if(enough(mid)){
            bestcase=mid;
            r=mid-1;
        }else{
            l= mid+1;
        }
    }
    cout<<bestcase;
    return 0;
}
