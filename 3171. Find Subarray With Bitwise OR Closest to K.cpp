class Solution {
public:
    int update(vector<int>&nums,int i,int j,vector<int>&freq){
        for(int k=0;k<32;k++){
            if((nums[i]&(1<<k))){
                freq[k]--;
            }
        }
        long long cnt=1;
        long long num=0;
        for(int k=0;k<32;k++){
            if(freq[k]>0){
                num=num+1LL*cnt;
            }
            cnt=cnt*2;
        }
        return num;
    }
    int minimumDifference(vector<int>& nums, int k) {
        int i=0,j=0;
        int n=nums.size();
        int OR = 0;
        int mini=1e9;
        vector<int>freq(32,0);
        while(j<n){
            OR = OR | nums[j];
            for(int m=0;m<32;m++){
                if((nums[j] & (1<<m))){
                    freq[m]=freq[m]+1;
                }
            }
            while(OR>k and i<j){
                mini=min(mini,abs(k-OR));
                OR = update(nums,i,j,freq);
                i++;
            }
            mini=min(mini,abs(k-OR));
            j++;
        }
        return mini;
    }
};
