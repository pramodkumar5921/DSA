class Solution {
public:
    int pivotInteger(int n) {
        vector<int>PreSum(n+3,0);
        for(int i=1;i<=n;i++){
            PreSum[i]=PreSum[i-1]+i;
        }
        for(int i=1;i<=n;i++){
            if((PreSum[n]-PreSum[i]+i) == PreSum[i]){
                return i;
            }
        }
        return -1;
    }
};
