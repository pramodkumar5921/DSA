//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int m, int v) 
	{ 
	    // Your code goes here
	    vector<int>dp(v+1,0);
	    dp[0]=0;
	    for(int i=1;i<=v;i++){
	        dp[i]=INT_MAX;
	        for(int j=0;j<m;j++){
	            if(i-coins[j]>=0 and dp[i-coins[j]]!=INT_MAX){
	                dp[i]=min(dp[i],dp[i-coins[j]]+1);
	            }
	        }
	    }
	    if(dp[v]==INT_MAX){
	        return -1;
	    }
	    else{
	        return dp[v];
	    }
	    
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
