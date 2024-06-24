class Solution {
    public int minKBitFlips(int[] nums, int k) {
         HashMap<Integer,Boolean>mp=new HashMap<>();
        int ans=0;
        int flip=0;
        int i=0;
        int n=nums.length;
        while(i<n){
            int temp=i-k;
            if(mp.containsKey(temp)==true){
                flip--;
            }
            if(nums[i]==0 && flip%2==0){
                if(i+k-1>=n){
                    return -1;
                }
                ans=ans+1;
                flip=flip+1;
                mp.put(i,true);
            }
            if(nums[i]==1 && flip%2==1){
                 if(i+k-1>=n){
                    return -1;
                }
                ans=ans+1;
                flip=flip+1;
                mp.put(i,true);
            }
            i=i+1;
        }
        return ans;
    }
}
