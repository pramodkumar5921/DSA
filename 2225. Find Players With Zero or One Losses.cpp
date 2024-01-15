class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n=matches.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int winner=matches[i][0];
            int loser=matches[i][1];
            mp[loser]++;
        }
        vector<int>not_loser,only_one;
        unordered_map<int,bool>vis;
        for(int i=0;i<n;i++){
            int winner=matches[i][0];
            if(mp.find(winner)==mp.end() and vis[winner]==0){
                not_loser.push_back(winner);
                vis[winner]=1;
            }
        }
        for(auto it:mp){
            if(it.second==1){
                only_one.push_back(it.first);
            }
        }
        vector<vector<int>>ans;
        sort(not_loser.begin(),not_loser.end());
        sort(only_one.begin(),only_one.end());
        ans.push_back(not_loser);
        ans.push_back(only_one);

        return ans;
    }
};
