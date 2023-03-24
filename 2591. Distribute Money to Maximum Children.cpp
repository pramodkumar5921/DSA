class Solution {
public:
    int distMoney(int money, int children) {
        if(children>money){
            return -1;
        }
        int ans=0;
        money=money-children;
        for(int i=1;i<children;i++){
            if(money>=7){
                ans++;
                money=money-7;
            }
            else{
                return ans;
            }
        }
        if(money==7){
            ans++;
            
        }
        if(money==3){
            if(ans>0){
                ans--;
            }
            else{
                return -1;
            }
        }
        return ans;
        
    }
};
