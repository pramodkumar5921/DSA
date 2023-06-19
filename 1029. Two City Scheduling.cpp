class Solution {
public:
    static bool cmp(pair<int,pair<int,int>>&a,pair<int,pair<int,int>>&b){
        return a.first>b.first;
    }
    int twoCitySchedCost(vector<vector<int>>& cost) {
        int n=cost.size();
        vector<int>profit(n);
        for(int i=0;i<n;i++){
            profit[i]=(cost[i][1]-cost[i][0]);
        }
        vector<pair<int,pair<int,int>>>pq(n);
        for(int i=0;i<n;i++){
            pq[i].first=profit[i];
            pq[i].second.first=cost[i][0];
            pq[i].second.second=cost[i][1];
        }
        sort(pq.begin(),pq.end(),cmp);
        int ans=0;
        for(int i=0;i<n;i++){
            if(i<n/2){
                ans+=pq[i].second.first;
            }
            else{
                ans+=pq[i].second.second;
            }
        }
        return ans;
    }
};
