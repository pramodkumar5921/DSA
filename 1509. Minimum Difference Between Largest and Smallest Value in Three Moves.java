class Solution {
    public int minDifference(int[] nums) {
        if(nums.length<=4){
            return 0;
        }
        Arrays.sort(nums);
        int n=nums.length;
        int ans1=0,ans2=0,ans3=0,ans4=0;
        ans1=nums[n-4]-nums[0];
        ans2=nums[n-1]-nums[3];
        ans3=nums[n-2]-nums[2];
        ans4=nums[n-3]-nums[1];
        ans1=Math.min(ans1,ans2);
        ans1=Math.min(ans1,ans3);
        ans1=Math.min(ans1,ans4);
        return ans1;
    }
}
