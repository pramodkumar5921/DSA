class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double start=customers[0][0];
        start*=(1.00000);
        double n = customers.size();
        double ans=0.00000;
        start+=customers[0][1];
        ans=(start-customers[0][0]);
        for(int i=1;i<n;i++){
            if(start>=customers[i][0]){
                start+=customers[i][1];
                ans+= (start-customers[i][0]);
            }
            else{
                start=customers[i][0]+customers[i][1];
                ans+= (start-customers[i][0]);
            }
        }
        return ans/n;
    }
};
