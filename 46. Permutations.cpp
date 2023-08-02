class Solution {
public:
    vector<vector<int>>result;
    int n;
    void solve(int idx,vector<int>&nums){
        // base case
        if(idx==n){
            result.push_back(nums);
            return ;
        }
        // recursive case
        for(int i=idx;i<n;i++){
            // do
            swap(nums[i],nums[idx]);
            // explore
            solve(idx+1,nums);
            // undo
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n=nums.size();
        solve(0,nums);
        return result;
    }
};
