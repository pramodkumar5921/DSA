class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sp=prices[0],cp=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<=cp){
                cp=prices[i];
                sp=prices[i];
            }
            else{
                sp=prices[i];
            }
            profit=max(profit,sp-cp);
        }
        return profit;
    }
};
