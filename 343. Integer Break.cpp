class Solution {
public:
    int solve(int n,int target,int i){
        // basecase
        if(i==1){
            return 1;
        }
        // recursive case
        int include=0;
        if(target>=i){
         include=i*(solve(n,target-i,i));
        }
        int exclude=solve(n,target,i-1);
        return max(include,exclude);
    }
    int integerBreak(int n) {
        int ans=solve(n,n,n-1);
        return ans;
    }
};
