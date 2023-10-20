#include<bits/stdc++.h>
using namespace std;
bool checkMirror(int n, vector<vector<int>> &edgesA, vector<vector<int>> &edgesB){
    vector<int>graphA[n+1],graphB[n+1];
    for(int i=0;i<edgesA.size();i++){
        int u=edgesA[i][0];
        int v=edgesA[i][1];
        graphA[u].push_back(v);
    }
    for(int i=0;i<edgesB.size();i++){
        int u=edgesB[i][0];
        int v=edgesB[i][1];
        graphB[u].push_back(v);
    }
    for(int i=0;i<n;i++){
        int j=0,k=graphA[i].size()-1;
        if(graphA[i].size()!=graphB[i].size()){
            return false;
        }
        while(k>0){
            if(graphA[i][j]!=graphB[i][k]){
                return false;
            }
            k--;
            j++;
        }
    }
    return true;
}
