//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void articulation(int node,vector<int>&vis,vector<int>&IN,vector<int>&LOW,
    vector<int>graph[],vector<int>&Point,int par=-1,int timer=0){
        vis[node]=true;
        IN[node]=LOW[node]=timer++;
        int child=0;
        
        for(auto v:graph[node]){
            if(v==par){
                continue;
            }
            if(vis[v]){
                LOW[node]=min(LOW[node],IN[v]);
            }
            else{
                articulation(v,vis,IN,LOW,graph,Point,node,timer);
                child++;
                if(par!=-1 and LOW[v]>=IN[node]){
                    Point[node]=true;
                }
                LOW[node]=min(LOW[node],LOW[v]);
            }
        }
        if(par==-1 and child>1){
            Point[node]=true;
        }
        return;
    }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
    //   unordered_map<int,vector<int>>graph;
    //   for(int i=)
      vector<int>Point(V+1,0);
    //   int n=adj.size();
    //   for(int i=0;i<n;i++){
    //       for(int j=0;j<adj[i].size();j++){
    //           int u=adj[i][j];
               
    //       }
    //   }
       vector<int>IN(V+1,0);
       vector<int>LOW(V+1,0);
       vector<int>vis(V+1,0);
       
       for(int  i=0;i<V;i++){
           if(vis[i]==false){
               articulation(i,vis,IN,LOW,adj,Point);
           }
       }
       vector<int>result;
       for(int i=0;i<V;i++){
           if(Point[i]==true){
               result.push_back(i);
           }
       }
       if(result.size()==0){
           return {-1};
       }
       return result;
    }
};

//{ Driver Code Starts.

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends
