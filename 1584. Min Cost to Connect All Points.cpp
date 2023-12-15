class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        unordered_map<int,vector<pair<int,int>>>mp;
        for(int i=0;i<points.size();i++){
            int x1=points[i][0];
            int y1=points[i][1];
            for(int j=i+1;j<points.size();j++){
                int x2=points[j][0];
                int y2=points[j][1];
                int dist=abs(x2-x1)+abs(y2-y1);
                mp[i].push_back({j,dist});
                mp[j].push_back({i,dist});
            }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        int ans=0;
        int n=points.size();
        vector<int>vis(n,0);
        while(pq.size()>0){
            int weight=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            if(vis[node]==1){
                continue;
            }
             ans+=weight;
             vis[node]=1;
            for(auto child:mp[node]){
                int cost=child.second;
                int neigh=child.first;
                if(vis[neigh]==1){
                    continue;
                }
                pq.push({cost,neigh});
            }
        }
        return ans;
    }
};
