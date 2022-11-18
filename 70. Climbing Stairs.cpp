class Solution {
public:
    int climbStairs(int n) {
        if(n==0|| n==1|| n==2){
            return n;
        }
        int a=1,b=2,res;
        for(int i=3;i<=n;i++){
            res=a+b;
            a=b;
            b=res;
        }
        return res; 
    }
};
