import java.util.*;
class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i=0;i<nums1.length;i++){
            if(mp.containsKey(nums1[i])==true){
                int temp=mp.get(nums1[i]);
                mp.put(nums1[i],temp+1);
            }
            else{
                mp.put(nums1[i],1);
            }
        }
        Vector<Integer>arr=new Vector<>();
        for(int i=0;i<nums2.length;i++){
            if(mp.containsKey(nums2[i])==true){
                arr.add(nums2[i]);
                int temp=mp.get(nums2[i]);
                if(temp>1){
                    mp.put(nums2[i],temp-1);
                }
                else{
                    mp.remove(nums2[i]);
                }
            }
        }
        int m=arr.size();
        int[] ans = new int[m];
        for(int i=0;i<m;i++){
            ans[i]=arr.get(i);
        }
        return ans;
    }
}
