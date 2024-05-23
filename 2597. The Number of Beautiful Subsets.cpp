class Solution {
public:
    unordered_map<int,int>mp;
    int ans=0;
    void solve(vector<int>&nums,int k,int idx,vector<int>&temp){
        // base case
        if(idx==nums.size()){
            ans++;
            return;
        }
        if(mp.find(nums[idx]-k)==mp.end() and mp.find(nums[idx]+k)==mp.end()){
            temp.push_back(nums[idx]);
            mp[nums[idx]]++;
            solve(nums,k,idx+1,temp);
            mp[nums[idx]]--;
            if(mp[nums[idx]]==0){
            mp.erase(nums[idx]);
            }
            temp.pop_back();
        }
        solve(nums,k,idx+1,temp);
        return ;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        vector<int>temp;
        solve(nums,k,0,temp);
        return ans-1;
    }
};
