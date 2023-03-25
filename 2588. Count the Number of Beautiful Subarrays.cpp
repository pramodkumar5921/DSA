class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        int n=nums.size();
       vector<int>preox(n+1,0);
       for(int i=0;i<n;i++){
           preox[i+1]=preox[i]^nums[i];
       }
       unordered_map<long long ,long long >mp;
      long long  int cnt=0;
       for(auto it:preox){
           if(mp.find(it)!=mp.end()){
               cnt+=mp[it];
           }
            mp[it]++;
       }
    return cnt;
    }
};
