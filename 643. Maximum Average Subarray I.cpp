class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,maxsum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
         maxsum=sum;
        for(int i=k;i<nums.size();i++){
            sum=sum+nums[i]-nums[i-k];
            maxsum=max(maxsum,sum);
        }
        double maxavg=maxsum/k;
        return maxavg;
    }
};
