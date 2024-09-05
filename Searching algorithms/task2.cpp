#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int s=0;
    cin>>s;
    
    int intervals=0;
    cin>>intervals;
    
    vector<int> arr;
    for(int i=0;i<s;i++){
        int n;
        cin>>n;
        arr.push_back(n);
    }
    
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<intervals;i++){
    int low=0,upper=0;
    cin>>low>>upper;
    
    auto id1 = lower_bound(arr.begin(), arr.end(), low);
    auto id2 = upper_bound(arr.begin(), arr.end(), upper);
        
        if(low>upper){
          cout<<0<<endl;
        }else{
          cout<<  ((id2-arr.begin())-(id1-arr.begin()))<<endl;
        }
        
    }
    
    return 0;
}
