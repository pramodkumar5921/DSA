class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        sort(salary.begin(),salary.end());
        double cnt=0,sum=0;
        for(int i=1;i<n-1;i++){
            cnt++;
            sum+=salary[i];
        }
        return sum/cnt;
    }
};
