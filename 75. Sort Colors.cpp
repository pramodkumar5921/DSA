class Solution {
    public void sortColors(int[] nums) {
        int n=nums.length;
        int i=0,j=0,k=n-1;
        while(j<=k){
            if(nums[j]==0){
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                i=i+1;
                j=j+1;
            }
            else if(nums[j]==1){
                j=j+1;
            }
            else{
                int temp=nums[j];
                nums[j]=nums[k];
                nums[k]=temp;
                // swap(nums,j,k);
                k=k-1;
            }
        }
    }
}
