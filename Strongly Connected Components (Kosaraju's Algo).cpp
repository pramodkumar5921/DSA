//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs(int node,vector<vector<int>>& adj,vector<int>&vis,stack<int>&st){
	    vis[node]=true;
	    for(int child:adj[node]){
	        if(vis[child]==false){
	            dfs(child,adj,vis,st);
	        }
	    }
	    st.push(node);
	    return;
	}
	void dfsT(int node,vector<int>&vis,vector<vector<int>>&adjT){
	    vis[node]=true;
	    for(int child:adjT[node]){
	        if(vis[child]==false){
	            dfsT(child,vis,adjT);
	        }
	    }
	}
    int kosaraju(int V, vector<vector<int>>& adj){
        vector<int>vis(V,0);
        stack<int>st;
        for(int i=0;i<V;i++){
            if(vis[i]==false){
                dfs(i,adj,vis,st);
            }
        }
        vector<vector<int>>adjT(V);
        for(int i=0;i<V;i++){
            vis[i]=false;
            for(auto it:adj[i]){
                adjT[it].push_back(i);
            }
        }
        int ssc=0;
        while(st.size()>0){
            int node=st.top();
            st.pop();
            if(vis[node]==false){
                ssc++;
                dfsT(node,vis,adjT);
            }
        }
        return ssc;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends
