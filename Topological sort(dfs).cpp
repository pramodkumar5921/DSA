class Solution
{
	public:
	void dfs(int node,vector<int>&vis,vector<int> adj[],stack<int>&st){
	    vis[node]=1;
	    for(auto it:adj[node]){
	        if(vis[it]==0){
	            dfs(it,vis,adj,st);
	        }
	    }
	    st.push(node);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    // code here
	    vector<int>vis(v,0);
	    stack<int>st;
	    for(int i=0;i<v;i++){
	        if(vis[i]==0){
	            dfs(i,vis,adj,st);
	        }
	    }
	    vector<int>ans;
	   while(st.size()>0){
	       ans.push_back(st.top());
	       st.pop();
	   }
	   return ans;
	}
};
