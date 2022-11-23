class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& v) {
       int x=v[1][0]-v[0][0];
       int y=v[1][1]-v[0][1];
       for(int i=2;i<v.size();i++){
           int distx=v[i][0]-v[i-1][0];
           int disty=v[i][1]-v[i-1][1];
           if(y*distx!=x*disty){
               return false;
           }
       }
       return true; 
    }
};
