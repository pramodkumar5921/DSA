class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int mod=1e9+7;
        int s=0;
        int ans=0;
        int e=nums.size()-1;
        sort(nums.begin(),nums.end());
        vector<int>pow1(nums.size()+1,1);
        for(int i=1;i<=nums.size();i++){
            pow1[i]=(2*pow1[i-1])%mod;
        }
        while(s<=e){
            if(nums[s]+nums[e]<=target){
                ans=ans%mod;
                ans=(ans+pow1[e-s]%mod);
                s++;
            }
            else{
                e--;
            }
        }
        return ans;
    }
};
