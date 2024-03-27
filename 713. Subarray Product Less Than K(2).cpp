class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=0){
            return 0;
        }
        int n=nums.size();
        int i=0,j=0;
        int product=1;
        int ans=0;
        while(i<n){
            product=(long long)product*nums[i];
            while(product>=k and j<i){
                product=product/nums[j];
                j++;
            }
            if(product<k){
            ans=(i-j+1)+ans;
            }
            i++;
        }
        return ans;
    }
};
