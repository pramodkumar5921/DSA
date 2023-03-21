class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int l=0,e=0;
        nums.push_back(1);
        vector<int>ans;
        // int cnt=0;
       long long  int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt+=e-l+1;
                e++;
                // l=e;
            }
            else if(nums[i]!=0){
                // l=e;
                e++;
                l=e;    
            }
        }
        return cnt;
    }
};
