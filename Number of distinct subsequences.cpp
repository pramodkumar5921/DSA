//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
    const int m=1e9+7;
  public:	
	int distinctSubsequences(string s){
	    unordered_map<char,int>mp;
	    int n=s.size();
	    vector<long long>dp(n+5,0);
	    dp[0]=1;
	    for(int i=0;i<n;i++){
	        dp[i+1]=(2*dp[i])%m;
	        if(mp.find(s[i])!=mp.end()){
	            dp[i+1]=(dp[i+1]-dp[mp[s[i]]-1]+m)%m;
	            dp[i+1]=dp[i+1]%m;
	        }
	        mp[s[i]]=i+1;
	    }
	    return dp[n];
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
