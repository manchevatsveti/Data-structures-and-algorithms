#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    int mid;
    cin>>mid;
    map<int,vector<int>> m ;
    
    int currSum=0;
    int count=0;
    int index = -1;
    
    vector<int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        
        arr.push_back(num);
        if(num==mid) index=i;
    }
    
    for(int i=0;i<n;i++){
        int num = arr[i];
        
        if(num>mid) currSum++;
        else if (num<mid) currSum --;
        
        if(currSum==0 && i>=index)count++;
        
        if(m.find(currSum)!=m.end()){
            for(int j=0;j<m[currSum].size();j++){
                if(m[currSum][j]+1<=index && index<=i)count++;
            }  
        }
        
        m[currSum].push_back(i);
    }
    cout<<count;
    return 0;
}
