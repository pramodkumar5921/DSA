class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        unordered_map<int,int>mp;
        int res=0;
        int n=points.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                int d1=(points[i][0]-points[j][0])*(points[i][0]-points[j][0]);
                int d2=(points[i][1]-points[j][1])*(points[i][1]-points[j][1]);
                int d=d1+d2;
                mp[d]++;
            }
            for(auto it=mp.begin();it!=mp.end();it++){
                res+=(it->second)*(it->second-1);
               
            }
            mp.clear();
        }
        return res;
    }
};
