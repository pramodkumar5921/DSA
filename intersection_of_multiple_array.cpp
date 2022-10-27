class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                mp[nums[i][j]]++;
            }
        }
        int rowsize=nums.size();
        for(auto it:mp){
           if(it.second==rowsize){
               v.push_back(it.first);
           }
        }
        sort(v.begin(),v.end());
        return v;
    }
};
