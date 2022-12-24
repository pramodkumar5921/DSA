class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=2e4+1;
        vector<int>coin(n,0);
        for(int num:nums){
            coin[num]+=num;
        }
      
        // int m=ans.size();
       long long  int sum=0;
        for(int i=0;i<n;i++){
            sum+=coin[i];
        }
        long long int dp[n+1];
        if(n==1){
            return coin[0];
        }
        if(n==2){
            return max(coin[0],coin[1]);
        }
        dp[0]=0;
        dp[1]=0;
        dp[2]=min(coin[1],coin[0]);
        for(int i=3;i<=n;i++){
            dp[i]=min(dp[i-1]+coin[i-1],coin[i-2]+dp[i-2]);
        }
        return sum-dp[n];
    }
};
