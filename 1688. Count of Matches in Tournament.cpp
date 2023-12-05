class Solution {
public: 
    int solve(int n){
        if(n==2){
            return 1;
        }
        int m=n/2;
        return m+solve(n-m);
    }
    int numberOfMatches(int n) {
        if(n==1){
            return 0;
        }
        int ans=solve(n);
        return ans;
    }
};
