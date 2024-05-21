class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int m=(1<<n);
        vector<vector<int>>res;
        for(int mask=0;mask<m;mask++){
            vector<int>temp;
            for(int bit=0;bit<n;bit++){
                if(mask&(1<<bit)){
                    temp.push_back(nums[bit]);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};
