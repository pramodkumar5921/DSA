class Solution {
public:
    long long findScore(vector<int>& nums) {
       set<pair<long long,long long>>st;
       int n=nums.size();
       vector<int>vis(n,0);
       for(int i=0;i<nums.size();i++){
           st.insert({nums[i],i});
       }
       long long ans=0;
       for(auto it:st){
           int first=it.first;
           int idx=it.second;
           if(vis[idx]==0){
               ans+=first;
               vis[idx]=1;
            if(idx-1>=0 and vis[idx-1]==0){
               vis[idx-1]=1;
           }
           if(idx+1<n and vis[idx+1]==0){
               vis[idx+1]=1;
           }
           }
           
       }
       return ans; 
    }
};
