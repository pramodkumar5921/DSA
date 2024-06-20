class Solution {
    public boolean check(int mid,int position[],int m){
        int cnt=1;
        int n=position.length;
        int temp=position[0];
        // System.out.println(temp);
        for(int i=0;i<n;i++){
            int diff=Math.abs(position[i]-temp);
            if(diff>=mid){
                temp=position[i];
                //   System.out.println(temp);
                cnt++;
            }
        }
        if(cnt>=m){
            return true;
        }
        return false;
    }
    public int maxDistance(int[] position, int m) {
        int right=-1;
        int n=position.length;
        for(int i=0;i<n;i++){
            right=Math.max(position[i],right);
        }
        int left=0;
        int ans=-1;
        Arrays.sort(position);
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(mid,position,m)==true){
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return ans;
    }
}
