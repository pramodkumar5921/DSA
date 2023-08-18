class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        unordered_map<int,unordered_set<int>>mp;
        for(auto road:roads){
            mp[road[0]].insert(road[1]);
            mp[road[1]].insert(road[0]);
        }
        int ans=0;
        for(int nod1=0;nod1<n;nod1++){
            for(int nod2=nod1+1;nod2<n;nod2++){
                int current=mp[nod1].size()+mp[nod2].size();
                if(mp[nod1].find(nod2)!=mp[nod1].end()){
                   current--;
                }
                ans=max(ans,current);
            }
        }
        return ans;
    }
};
