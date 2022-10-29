class Solution {
public:
    bool isHappy(int n) {
        if(n<0){
            return false;
        }
        // int ans=0;
        while(1){
            if(n==1 or n==7){
                return true;
            }
           if(n>1 and n<10){
               return false;
           }
            int ans=0;
            while(n>0){
                int num=n%10;
                ans=ans+num*num;
                n=n/10;
            }
            n=ans;
        }
        return false;
    }
};
