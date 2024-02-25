class Solution {
public:
    void dfs(vector<int>&vis,unordered_map<int,vector<int>>&graph,int node){
        vis[node]=1;
        for(auto child:graph[node]){
            if(vis[child]==0){
            dfs(vis,graph,child);
            }
        }
        return;
    }
    bool canTraverseAllPairs(vector<int>& nums) {
        unordered_map<int,int>factoridx;
        int n=nums.size();
        unordered_map<int,vector<int>>graph;
        for(int i=0;i<nums.size();i++){
            for(int factor=2;factor*factor<=nums[i];factor++){
                if(nums[i]%factor!=0){
                    continue;
                }
                if(factoridx.find(factor)!=factoridx.end()){
                    int idx=factoridx[factor];
                    graph[idx].push_back(i);
                    graph[i].push_back(idx);
                }
                else{
                    factoridx[factor]=i;
                }
                while(nums[i]%factor==0){
                    nums[i]=nums[i]/factor;
                }
            }
            if(nums[i]>1){
                if(factoridx.find(nums[i])!=factoridx.end()){
                    int idx=factoridx[nums[i]];
                    graph[idx].push_back(i);
                    graph[i].push_back(idx);
                }
                else{
                    factoridx[nums[i]]=i;
                }
            }
        }
        vector<int>vis(n,0);
        // return true;
        dfs(vis,graph,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                return false;
            }
        }
        return true;
    }
};
