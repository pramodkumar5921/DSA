//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long dp[1001][1001];
    long long solve(int coins[],int N,int sum,int idx){
        // base case
        if(sum==0){
            return 1;
        }
        if(sum<0){
            return 0;
        }
        if(idx>=N){
            return 0;
        }
        if(dp[sum][idx]!=-1){
            return dp[sum][idx];
        }
        // recursive case
        long long include=0,exclude=0;
        if(coins[idx]<=sum){
            include=solve(coins,N,sum-coins[idx],idx);
        }
        exclude=solve(coins,N,sum,idx+1);
        
        return dp[sum][idx]=include+exclude;
    }
    long long int count(int coins[], int N, int sum) {
        memset(dp,-1,sizeof(dp));
        long long ans=solve(coins,N,sum,0);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends
