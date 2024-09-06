#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

long long minCountPaths(long long j,long long &countPaths,vector<bool>& visited,unordered_map<long long,vector<long long>>& mp){
        long long result = 0;
        if(!visited[j]){
            visited[j]=true;
            for(long long k : mp[j]){
                if(!visited[k]) {
                    result += minCountPaths(k,countPaths,visited,mp) + 1;
                    countPaths++;
                }
            }
        }
        return result;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long n;
    cin>>n;
    
    for(long long i=0;i<n;i++){
        long long N,M,K,L;
        cin>>N>>M>>K>>L;
        
        //bool visited[N+1] = {false};
        vector<bool> visited(N+1,false);
        unordered_map<long long,vector<long long>> mp;
       
        for(long long j=0;j<M;j++){
            long long x,y;
            cin>>x>>y;
            
            mp[x].push_back(y);
            mp[y].push_back(x);
        }
        
        if(K<=L){
            cout<<N*K<<endl;
        }else{
            long long countPaths = 0;
            long long result =0;
            
            for(long long j=1;j<=N;j++){
                if(!visited[j]){
                    long long paths = minCountPaths(j,countPaths,visited,mp);
                    result+=((long long)paths*L + K);
                    countPaths = 0;
                    
                }
            }
            cout<<result<<endl;
        }
    }
    return 0;
}
