class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        ans.push_back(1);
        vector<int>lis;
        lis.push_back(nums[0]);
        for(int i=1;i<n;i++){
            int idx=upper_bound(lis.begin(),lis.end(),nums[i])-lis.begin();
            if(idx==lis.size()){
                lis.push_back(nums[i]);
                ans.push_back(lis.size());
            }
            else{
                lis[idx]=nums[i];
                ans.push_back(idx+1);
            }
        }
        return ans;
    }
};
