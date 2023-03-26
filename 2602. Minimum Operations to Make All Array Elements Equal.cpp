class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        long long int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<long long >prefix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        long long ans=0;
        vector<long long >v;
        for(int i=0;i<queries.size();i++){
            long long int target=queries[i];
            long long int idx=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            long long int smalllen,largelen;
                smalllen=idx;
                 largelen=n-idx;
           long long  smallans=smalllen*(long long )(target)-((idx > 0)?prefix[idx-1]:0);
            long long largeans=prefix[n-1]-((idx > 0)?prefix[idx-1]:0)-(target*(long long )largelen);
            long long ans=smallans+largeans;
            v.push_back(ans);
        }
        return v;
    }
};





