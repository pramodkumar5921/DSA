int dp[501][501];
    
    int solve(int i, int j,int arr[])
    {
        if(i>=j)return 0;
        
        if(dp[i][j]!=-1)
        return dp[i][j];

        int ans=INT_MAX;
        for(int k=i;k<=j-1;k++)
        {
            int tempAns = solve(i,k,arr) + solve(k+1,j,arr)
                          + arr[i-1]*arr[k]*arr[j];
            
            ans=min(ans,tempAns);
                          
        }
        return dp[i][j] = ans;
    }
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp,-1,sizeof(dp));
        return solve(1,N-1,arr);
    }
	```
	
Bottom Up DP
It's a bit tricky but if you got the above logic then you woudn't face any issues. I stil, prefer the Momoization
