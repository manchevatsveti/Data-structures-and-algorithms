#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s1,s2;
    cin>>s1>>s2;
    
    size_t maxD=0;
    size_t curr =0;
    
    size_t size1 = s1.size();
    size_t size2 = s2.size();
    
    for(size_t i=0;i<size1;i++){
        size_t id =i;
        for(size_t j=0;j<size2 && id<size1;j++){
            if(s1[id]==s2[j]){
                curr++;
                maxD = max(maxD,curr);
            }else{
                curr=0;
            }
            id++;
        }
    }
    
    cout<<maxD;
    return 0;
}
