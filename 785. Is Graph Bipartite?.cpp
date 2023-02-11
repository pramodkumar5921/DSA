class Solution {
public:
    bool solve(int start,vector<int>&color,vector<vector<int>>&graph,int v){
        color[start]=0;
        queue<int>q;
        q.push(start);
        while(q.size()>0){
            int temp=q.front();
            q.pop();
            for(auto it:graph[temp]){
                if(color[it]==-1){
                    color[it]=!color[temp];
                    q.push(it);
                }
                else if(color[it]==color[temp]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int>color(v,-1);
        for(int i=0;i<v;i++){
            if(color[i]==-1){
               if(solve(i,color,graph,v)==false){
                   return false;
               } 
            }
        }
        return true;
    }
};
