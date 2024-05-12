class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
     int n=energy.size();
     vector<int>dp(n,0);
     for(int i=0;i<n;i++){
         dp[i]=energy[i];
     }
     for(int i=n-1;i>=0;i--){
        dp[i]=energy[i];
        if(i+k<n){
            dp[i]=dp[i]+dp[i+k];
        }
     }
        return *max_element(dp.begin(),dp.end());
    }
};
