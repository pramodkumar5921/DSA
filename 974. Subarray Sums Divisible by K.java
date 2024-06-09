import java.util.HashMap;

class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        HashMap<Integer,Integer>map = new HashMap<>();
        map.put(0,1);         
        int sum = 0;
        int ans = 0;
        
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            int rem = sum % k;
            if (rem < 0) {
                rem += k;
            }
            ans=ans+map.getOrDefault(rem,0);
            int temp=map.getOrDefault(rem,0);
            map.put(rem,temp+1);
        }
        
        return ans;
    }
}
