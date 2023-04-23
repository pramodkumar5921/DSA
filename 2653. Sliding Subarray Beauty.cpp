class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int j=0;
        int n=nums.size();
        int i=0;
        set<int>st;
        unordered_map<int,int>mp;
        vector<int>ans;
        while(i<nums.size()){
           st.insert(nums[i]);
           mp[nums[i]]++;
           if(i-j+1==k){
               int m=x;
               for(auto it:st){
                   if(mp[it]>=m){
                       if(it<0){
                           ans.push_back(it);
                           break;
                       }
                       else{
                           ans.push_back(0);
                           break;
                       }
                   }
                   m=m-mp[it];
               }
               if(mp[nums[j]]==1){
                   st.erase(nums[j]);
                   mp[nums[j]]--;
               }
               else{
                   mp[nums[j]]--;
               }
               j++;
               
           }
           i++;
        }
        return ans;
    }
};
