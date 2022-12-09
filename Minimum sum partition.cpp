class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // pramod kumar
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    int range=sum;
	    int dp[n+1][sum+1];
	    for(int i=0;i<=n;i++){
	        dp[i][0]=1;
	    }
	    for(int j=1;j<=sum;j++){
	        dp[0][j]=0;
	    }
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            if(arr[i-1]<=j){
	                dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
	            }
	            else{
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	   // vector<int>v;
	   // for(int i=0;i<=sum/2;i++){
	   //     if(dp[0][i]>0){
	   //         v.push_back(i);
	   //     }
	   // }
	     int ans = INT_MAX;
//All the subset sum which is possible for this n sized array will have true value in table in nth row
	    for(int j = 0; j<sum+1; j++)//Iterating last row where the sum exists
	    {
// abs(sum - 2*(subset_sum) will give subset sum difference
	        if(dp[n][j] == 1) ans = min(ans, abs(sum - 2*j));
	    }
	    return ans;
	}
// 	} 
};
