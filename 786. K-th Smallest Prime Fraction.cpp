class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<vector<double>>pq;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                double div=(double)arr[i]/arr[j];
                pq.push(vector<double>{(double)div,(double)arr[i],(double)arr[j]});
                if(pq.size()>k){
                    pq.pop();
                }
            }
        }
        vector<double>res=pq.top();
        vector<int>ans;
        int  first=(int)res[1];
        int  sec   =(int)res[2];
        ans.push_back(first);
        ans.push_back(sec);
        return ans;
    }
};
