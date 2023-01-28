class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>v(n,0);
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            v[i]=v[i-1]+nums[i];
        }
        int mod=1e9+7;
        int i=1;int j=0;
        vector<int>ans;
        while(i<n and j<n){
            ans.push_back(v[i]-v[j]);
            if(i==n-1){
                j++;
                i=j+1;
                continue;
            }
            i++;
        }
        for(int i=0;i<ans.size();i++){
            v.push_back(ans[i]);
        }
       
        sort(v.begin(),v.end());
        int res=0;
        for(int i=left-1;i<right;i++){
            res=res%mod;
            res+=v[i];
        }
        return res;
    }
};
