class Solution {
public:
    int solve(int &num){
        // base case
        int ans=0;
        if(num<=9){
            ans=num;
            return ans;
        }
        // recursive case
        while(num>0){
            ans+=num%10;
            num=num/10;
        }
       return  solve(ans);
    }
    int addDigits(int num) {
        int ans=solve(num);
        return ans;
    }
};
