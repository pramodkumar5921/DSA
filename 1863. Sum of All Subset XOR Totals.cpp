class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int m=(1<<n);
        int ans=0;
        for(int mask=0;mask<m;mask++){
            int xum=0;
            for(int bit=0;bit<n;bit++){
                if(mask&(1<<bit)){
                    xum=xum^nums[bit];
                }
            }
            ans+=xum;
        }
        return ans;
    }
};
