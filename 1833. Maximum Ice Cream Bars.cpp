class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int cnt=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            if(coins>=costs[i]){
                cnt++;
                coins-=costs[i];
            }
        }
        return cnt;
    }
};
