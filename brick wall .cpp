         class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<wall.size();i++){
            sum=0;
            for(int j=0;j<wall[i].size()-1;j++){
                sum+=wall[i][j];
                mp[sum]++;
            }
        }
        int ans=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>ans){
                ans=it->second;
            }
        }
        return wall.size()-ans;
    }
};
