class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=abs(nums[i]);
            int idx=num-1;
            if(nums[idx]<0){
                ans.push_back(num);
            }
            else{
                nums[idx]=-1*nums[idx];
            }
        }
        return ans;
    }
};
