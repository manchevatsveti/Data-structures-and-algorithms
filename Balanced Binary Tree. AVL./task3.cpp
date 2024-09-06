#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
size_t minXor = 1e9;

void getMinXOR(set<size_t>& s, set<size_t>::iterator it){
    if(!s.empty() && s.size()>1){
        
        auto curr =it;
        auto prev = --it;
        minXor = min(minXor,*prev^*curr);
        
        curr++;
        prev++;
        if(curr!=s.end() && prev!=s.end()) minXor = min(minXor,*prev^*curr);
        
        cout<<minXor<<endl;
    }else return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    size_t q;
    cin>>q;
    set<size_t> s;
    s.insert(0);
    
    for(size_t i=0;i<q;i++){
        size_t n;
        cin>>n;
        
        set<size_t>::iterator it = s.insert(n).first;
        getMinXOR(s,it);
    }
    
    return 0;
}
