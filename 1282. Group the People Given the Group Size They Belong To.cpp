class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>&nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
         vector<vector<int>>ans;
        for(auto it:mp){
            int size = it.first;
            int cnt=1;
            vector<int>temp;
            for(int i=0;i<it.second.size();i++){
                temp.push_back(it.second[i]);
                if(cnt%size==0){
                    ans.push_back(temp);
                    vector<int>res;
                    temp=res;
                }
                cnt++;
            }
        }
        return ans;
    }
};
