class Solution {
public:
    int dp[50001];
    int Index(vector<pair<pair<int,int>,int>>&temp,int idx){
        int l=temp.size()-1;
        int s=0;
        int ans=temp.size();
        while(s<=l){
            int mid=s+(l-s)/2;
            if(temp[mid].first.first>=temp[idx].first.second){
                ans=mid;
                l=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    int solve(vector<pair<pair<int,int>,int>>&temp,int idx){
        if(idx>=temp.size()){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        int include=0,exclude=0;
        int i=Index(temp,idx);
        include=temp[idx].second+solve(temp,i);
        exclude=0+solve(temp,idx+1);

        return dp[idx]=max(include,exclude);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        memset(dp,-1,sizeof(dp));
        vector<pair<pair<int,int>,int>>temp;
        int n=profit.size();
        for(int i=0;i<n;i++){
            temp.push_back({{startTime[i],endTime[i]},profit[i]});
        }
        sort(temp.begin(),temp.end());
        int ans=solve(temp,0);
        return ans;
    }
};
