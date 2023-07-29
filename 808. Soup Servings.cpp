class Solution {
public:
    vector<vector<double>>t;
    double solve(double a,double b,vector<pair<int,int>>&sever){
        // base case
        if(a<=0 and b<=0){
            return 0.5;
        }
        if(a<=0){
            return 1.0;
        }
        if(b<=0){
            return 0.0;
        }
        if(t[a][b]!=-1.0){
            return t[a][b];
        }
        // recursive case
        double prob=0.0;
        for(auto it:sever){
            int a_taken=it.first;
            int b_taken=it.second;
            prob+=solve(a-a_taken,b-b_taken,sever);
        }
        return t[a][b]=prob*(0.25);
    }
    double soupServings(int n) {
        if(n>=3500){
            return 1;
        }
        vector<pair<int,int>>sever={{100,0},{75,25},{50,50},{25,75}};
        t.resize(n+1,vector<double>(n+1,-1.0));
        return solve(n,n,sever);
    }
};
