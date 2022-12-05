class Solution {
public:
int solve(int tail[],int r,int l,int x){
    while(r>l){
        int m=l+(r-l)/2;
        if(tail[m]>=x){
            r=m;
        }
        else{
            l=m+1;
        }
        // return r;
    }
    return r;
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();int len=1;
        int tail[n];
        tail[0]=nums[0];
        // int tail[n];
       for(int i=1;i<n;i++){
          if(nums[i]>tail[len-1]){
              tail[len]=nums[i];
              len++;
          }
       
          else{
              int c=solve(tail, len-1,0,nums[i]);
                  tail[c]=nums[i];
            }
          }
        return len;
    }
};
