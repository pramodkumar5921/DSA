class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return 0;
        }
        int step=nums[0];
        int maxreach=nums[0];
        int jump=1;
        for(int i=1;i<n;i++){
            if(i==n-1){
                return jump;
        }
        maxreach=max(maxreach,nums[i]+i);
        step--;
        if(step==0){
            jump++;
            step=maxreach-i;
        }
        }
        return 0;
    }
};
