class Solution {
public:
    void maxLen(unordered_map<int,vector<int>>&graph,int ele,unordered_set<int>&vis,int &cnt){
        vis.insert(ele);
        cnt++;
        for(int child:graph[ele]){
            if(vis.find(child)!=vis.end()){
                continue;
            }
            else{
                maxLen(graph,child,vis,cnt);
            }
        }
        return;
    }
    int longestConsecutive(vector<int>& nums) {
    //    unordered_map<int,int>mp;
       unordered_set<int>st;
       for(int i=0;i<nums.size();i++){
          st.insert(nums[i]);
       }
    //    for(int i=0;i<nums.size();i++){
    //         [nums[i]]++;
    //    }
       unordered_map<int,vector<int>>graph;
       for(int i=0;i<nums.size();i++){
            int ele=nums[i];
            if(st.find(ele-1)!=st.end()){
                graph[ele].push_back(ele-1);
            }
            if(st.find(ele+1)!=st.end()){
                graph[ele].push_back(ele+1);
            }
       }
       int ans=0;
       unordered_set<int>vis;
       for(int i=0;i<nums.size();i++){
           if(vis.find(nums[i])==vis.end()){
              int cnt=0;
              maxLen(graph,nums[i],vis,cnt);
              ans=max(ans,cnt);
           }
       } 
       return ans;
    }
};
