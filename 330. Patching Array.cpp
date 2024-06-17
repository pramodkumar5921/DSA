class Solution {
    public int minPatches(int[] nums, int n) {
        int i=0;
        long sum=0;
        int ans=0;
        while(sum<n){
            if(i<nums.length && nums[i]<=sum+1){
                sum=sum+nums[i];
                i=i+1;
            }
            else{
                sum+= (sum+1);
                ans=ans+1;
            }
        }
        return ans;
    }
}
