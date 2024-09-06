#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void traverse(int i,int j,int** arr,bool** visited,int n,int& maxRow,int& maxCol,int& minRow,int& minCol){
    
    if(!visited[i][j] && arr[i][j]==1){
        visited[i][j]=true;
        
        minRow = min(minRow,i);
        minCol = min(minCol,j);
        
        maxRow = max(maxRow,i);
        maxCol = max(maxCol,j);
        
        if(i!=0) traverse(i-1, j, arr, visited,n,maxRow,maxCol,minRow,minCol);
        if(i!=n-1) traverse(i+1,j, arr, visited,n,maxRow,maxCol,minRow,minCol);
        if(j!=0) traverse(i,j-1, arr, visited,n,maxRow,maxCol,minRow,minCol);
        if(j!=n-1) traverse(i,j+1, arr, visited,n,maxRow,maxCol,minRow,minCol);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    int** arr = new int*[n];
    bool** visited = new bool*[n];
    
    for(int i=0;i<n;i++){
        arr[i]= new int[n];
        visited[i] = new bool[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            arr[i][j] = temp;
            visited[i][j]=false;
        }
    }
    
    vector<int> v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!visited[i][j] && arr[i][j]==1){
                int maxRow = 0;
                int maxCol = 0;
                
                int minRow = 4001;
                int minCol = 4001;
                
                traverse(i,j,arr,visited,n,maxRow,maxCol,minRow,minCol);
                
                //cout<<maxRow<<" "<<minRow<<" "<<maxCol<<" "<<minCol<<endl;
                v.push_back((maxRow-minRow+1)*(maxCol-minCol+1));
            }
        }
    }
     sort(v.rbegin(),v.rend());
    
    for(auto& i : v){
        cout<<i<<" ";
    }
    return 0;
}
