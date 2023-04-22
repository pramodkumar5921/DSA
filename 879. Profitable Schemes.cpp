class Solution {
public:
int dp[101][101][101];
const int mod=1e9+7;
    int solve(int idx,int pro,int people,vector<int>&group,vector<int>&profit,int n,int minprofit){
        int m=profit.size();
        if(people>n){
            return 0;
        }
        if(idx>=m){
            if(pro>=minprofit and people<=n){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(dp[idx][pro][people]!=-1){
            return dp[idx][pro][people];
        }
        // recursive case
        long int ans=0;
        long int include=solve(idx+1,min(pro+profit[idx],minprofit),people+group[idx],group,profit,n,minprofit)%(mod);
        long int exclude=solve(idx+1,pro,people,group,profit,n,minprofit)%(mod);
        ans+=(include+exclude)%(mod);
        return dp[idx][pro][people]=ans%(mod);
    }
    int profitableSchemes(int n, int minprofit, vector<int>& group, vector<int>& profit) {
        memset(dp,-1,sizeof(dp));
        int ans=solve(0,0,0,group,profit,n,minprofit);

        return ans;
    }
};
