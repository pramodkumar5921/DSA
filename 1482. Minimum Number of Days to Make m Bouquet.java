class Solution {
    public boolean check(int[] bloomDay,int m,int k,int mid){
        int cnt=0;
        int n=bloomDay.length;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
                ++cnt;
                if(cnt==k){
                    cnt=0;
                    --m;
                }
                if(m==0){
                    return true;
                }
            }
            else{
                cnt=0;
            }
        }
        return false;
    }
    public int minDays(int[] bloomDay, int m, int k) {
        int right=-1;
        int n=bloomDay.length;
        for(int i=0;i<n;i++){
            right=Math.max(bloomDay[i],right);
        }
        int left=0;
        int ans=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(bloomDay,m,k,mid)==true){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
}
