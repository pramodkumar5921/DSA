//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A,int n,int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d ",&A[i][j]);
            }
        }
    }
 
    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
class Solution {
  public:
    unordered_map<int,vector<int>>graph;
    bool iscycle(vector<int>&vis,int node,int par){
        vis[node]=1;
        for(int child:graph[node]){
            if(child==par){
                continue;
            }
            else if(vis[child]==1){
                return true;
            }
            else if(iscycle(vis,child,node)==true){
                return true;
            }
        }
        return false;
    }
    int isTree(int n, int m, vector<vector<int>> &adj) {
        if(n==1 and m==0){
            return 1;
        }
        if(n-1 != m){
            return 0;
        }
        vector<int>vis(n,0);
        for(int i=0;i<m;i++){
            int u=adj[i][0];
            int v=adj[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                bool ans=iscycle(vis,i,-1);
                if(ans==true){
                    return 0;
                }
            }
        }
        unordered_set<int>st;
        for(int i=0;i<adj.size();i++){
            st.insert(adj[i][0]);
            st.insert(adj[i][1]);
        }
        for(int i=0;i<n;i++){
            if(st.find(i)==st.end()){
                return 0;
            }
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        int m; 
        scanf("%d",&m);
        
        
        vector<vector<int>> edges(m, vector<int>(2));
        Matrix::input(edges,m,2);
        
        Solution obj;
        int res = obj.isTree(n, m, edges);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
