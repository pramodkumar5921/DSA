class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      unordered_set<int>st;
    // //   vector<int>ans;
      for(int i=0;i<nums.size();i++){
          st.insert(nums[i]);
      } 
      unordered_map<int,int>mp;
      for(int i=0;i<nums.size();i++){
          mp[nums[i]]++;
      }
    //   vector<int>ans;
    nums.erase(nums.begin(),nums.end());
      for(auto it=mp.begin();it!=mp.end();it++){
          int key=it->first;
          if(st.find(key)!=st.end()){
              nums.push_back(key);
          }
      } 
       sort(nums.begin(),nums.end());
      return nums.size();
    // for(int i=1;i<=nums[i];){
    //     if(nums[i-1]==nums[i]){
    //         i++;
    //     }
    // }
    }
};
