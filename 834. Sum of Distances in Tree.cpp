class Solution {
public:
    unordered_map<int,vector<int>>graph;
    int sumRoot=0;
    vector<int>count;
    vector<int>result;
    int N;
    int DFSbase(int curr_node,int prev_node,int depth){
        int curr_count=1;
        sumRoot+=depth;
        for(auto child:graph[curr_node]){
            if(child==prev_node){
                continue;
            }
            curr_count+=DFSbase(child,curr_node,depth+1);
        }
        count[curr_node]=curr_count;
        return curr_count; 
    }
    void dfs(int curr_node,int prev_node){
        for(auto child:graph[curr_node]){
            if(child==prev_node){
                continue;
            }
            result[child]=result[curr_node]-count[child]+(N-count[child]);
            dfs(child,curr_node);
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        N=n;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        count.resize(n,0);
        result.resize(n,0);
        DFSbase(0,-1,0);
        result[0]=sumRoot;
        dfs(0,-1);
        return result;
    }
};
