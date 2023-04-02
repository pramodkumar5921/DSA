class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=0;
        for(auto it:mp){
            if(it.second>n){
                n=it.second;
            }
        }
        for(int i=0;i<n;i++){
        
           int m=nums.size();
           vector<int>vis(201,0);
           vector<int>v;
           for(int i=0;i<nums.size();i++){
               if(mp[nums[i]]>0 and vis[nums[i]]==0){
                
                   mp[nums[i]]--;
                   vis[nums[i]]=1;
                   v.push_back(nums[i]);
               }
              
           }
        
           ans.push_back(v);
        }
       return ans;
    }
};
