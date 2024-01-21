class Solution {
public:
    vector<int> countOfPairs(int n, int x, int y) {
        vector<pair<int,int>>edges;
        for(int i=1;i<n;i++){
            edges.push_back({i,i+1});
             edges.push_back({i+1,i});
        }
          edges.push_back({x,y});
          edges.push_back({y,x});
      vector<vector<int>>dist(n+1,vector<int>(n+1,0));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==j){
                dist[i][j]=0;
            }
            else{
                dist[i][j]=1e9;
            }
        }
    }
    for(int i=0;i<edges.size();i++){
        int x=edges[i].first;
        int y=edges[i].second;
        int wt=1;
        dist[x][y]=min(wt,dist[x][y]);
        dist[y][x]=min(wt,dist[y][x]);
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n;j++){
        //         cout<<dist[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                mp[dist[i][j]]++;
            }
        }
        vector<int>k;
        int cnt=0;
        for(auto it:mp){
            if(it.first!=0){
            k.push_back(it.second);
                cnt++;
            }
        }
        for(int i=0;i<n-cnt;i++){
            k.push_back(0);
        }
        return k;
    }
};
