class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int mini=nums[0];
        int maxi=nums[nums.size()-1];
        int len=maxi-mini;
        vector<int>ans(len+1,0);
        vector<int>res;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i]-mini;
            if(ans[temp]<=1){
                ans[temp]+=1;
                cnt++;
                res.push_back(nums[i]);
            }
        }
        nums=res;
        return cnt;
    }
};
