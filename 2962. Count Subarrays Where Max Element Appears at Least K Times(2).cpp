class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int ele=*max_element(nums.begin(),nums.end());
        int i=0,j=0;
        int n=nums.size();
        long long ans=0;
        while(i<n and j<n){
            mp[nums[i]]++;
            if(mp.find(ele)==mp.end() || mp[ele]<k){
                ans=ans+(i-j+1);
            }
           else{
               while(mp[ele]>=k and j<=i){
                   mp[nums[j]]--;
                   if(mp[ele]==0){
                    mp.erase(ele);
                   }
                   j++;
               }
               ans=ans+(i-j+1);
           }
           i++;
        }
        long long total=((long long)n*(long long)(n+1))/2;
        // cout<<total<<endl;
        return total-ans;
    }
};
