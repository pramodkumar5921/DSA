class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        long long int lar=*max_element(nums.begin(),nums.end());
        unordered_map<long long int,long long int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=1;i<=lar+1;i++){
            if(mp.find(i)==mp.end()){
                return i;
            }
        }
        for(auto it:mp){
            cout<<it.first<<" ";
        }
        return 1;
    }
};
