class Solution {
    public int minIncrementForUnique(int[] nums) {
        int[] arr=new int[1000005];
        for(int i=0;i<=1000000;i++){
            arr[i]=0;
        }
        for(int i=0;i<nums.length;i++){
            arr[nums[i]]=arr[nums[i]]+1;
        }
        int ans=0;
        for(int i=0;i<=1000000;i++){
            if(arr[i]>0){
                ans=ans+arr[i]-1;
                arr[i+1]=arr[i+1]+arr[i]-1;
            }
        }

        return ans;
    }
}
