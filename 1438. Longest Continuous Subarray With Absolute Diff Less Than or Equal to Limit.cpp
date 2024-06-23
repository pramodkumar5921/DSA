class Solution {
    public class Pair{
        int ele;
        int idx;

        Pair(int v1,int v2){
            this.ele=v1;
            this.idx=v2;
        }
    }
    public int longestSubarray(int[] nums, int limit) {
        int maxi=nums[0];
        int mini=nums[0];
        int n=nums.length;
        int i=0,j=0;
        int ans=1;
        PriorityQueue<Pair>maxpq=new PriorityQueue<>((a,b) -> b.ele - a.ele);
        PriorityQueue<Pair>minpq=new PriorityQueue<>((a,b) -> a.ele - b.ele);
        while(i<n){
            maxpq.offer(new Pair(nums[i],i));
            minpq.offer(new Pair(nums[i],i));
                while(maxpq.peek().ele>(minpq.peek().ele+limit)){
                    j=Math.min(maxpq.peek().idx , minpq.peek().idx)+1;
                    while(maxpq.peek().idx <  j){
                        maxpq.poll();
                    }
                    while(minpq.peek().idx < j){
                        minpq.poll();
                    }
               }
                ans=Math.max(ans,i-j+1);
            i=i+1;
        }
        return ans;
    }
}
