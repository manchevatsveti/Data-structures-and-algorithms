#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s1,s2;
    cin>>s1>>s2;
    
    size_t count =0;
    size_t size2 = s2.size();
    
    size_t id = s2.find(s1);
    
    while(id<size2){
        count++;
        id=s2.find(s1,id+1);
    }
    cout<<count;
    return 0;
}
