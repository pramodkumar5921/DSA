class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
         priority_queue < pair <int,vector<int> > >mp;
         for(int i=0;i<rows;i++){
             for(int j=0;j<cols;j++){
                 int d=abs(i-rCenter)+abs(j-cCenter);
                 vector<int>v;
                 v.push_back(i);
                 v.push_back(j);
                 pair<int,vector<int>>p=make_pair(-d,v);
                 mp.push(p);
             }
         }
         vector<vector<int>>ans;
         while(mp.size()>0){
             ans.push_back(mp.top().second);
             mp.pop();
         }
         return ans;
    }
};
