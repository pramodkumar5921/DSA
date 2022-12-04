class Solution {
public:
    bool isUgly(int n) {
        // base case
        if(n==0){
            return 0;
        }
        if(n==1){
            return true;
        }
        if(n%5==0){
            n=n/5;
            if(isUgly(n)==false){
                return false;
            }
        }
        else if(n%2==0){
            n=n/2;
            if(isUgly(n)==false){
                return false;
            }
        }
        else  if(n%3==0){
            n=n/3;
            if(isUgly(n)==false){
                return false;
            }
        }
        else{
            return false;
        }
        return true;
    }
};
