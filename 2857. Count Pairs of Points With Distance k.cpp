class Solution {
public:
    int countPairs(vector<vector<int>>& co, int k) {
        int n=co.size();
        map<pair<int,int>,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            int x1 = co[i][0];
            int y1 = co[i][1];
            
            for(int j=0;j<=k;j++){
                int x2 = j^x1;
                int y2 = (k-j)^y1;
                
                ans += mp[{x2,y2}];
            }
            mp[{x1,y1}]++;
        }
        return ans;
    }
};
