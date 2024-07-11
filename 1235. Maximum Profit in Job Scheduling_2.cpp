class Solution {
public:
int dp[50001];
    int LowerBound(vector<vector<int>>&arr,int ele){
        int l=0,r=arr.size()-1;
        int ans=arr.size();
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid][0]==ele){
                ans=mid;
                r=mid-1;
            }
            else if(arr[mid][0]<ele){
                l=mid+1;
            }
            else{
                ans=mid;
                r=mid-1;
            }
        }
        return ans;
    }
    int endidx(vector<vector<int>>&arr,int end){
        int idx=LowerBound(arr,end);
        return idx;
    }
    int maxProfit(vector<vector<int>>&arr,int idx){
        if(idx>=arr.size()){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        int include=0,exclude=0;
        int end=endidx(arr,arr[idx][1]);
        include=arr[idx][2]+maxProfit(arr,end);
        exclude=0+maxProfit(arr,idx+1);

        return dp[idx]=max(include,exclude);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        memset(dp,-1,sizeof(dp));
        vector<vector<int>>arr;
        int n=startTime.size();
        for(int i=0;i<n;i++){
            vector<int>temp;
            temp.push_back(startTime[i]);
            temp.push_back(endTime[i]);
            temp.push_back(profit[i]);
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        int ans=maxProfit(arr,0);
        return ans;
    }
};
