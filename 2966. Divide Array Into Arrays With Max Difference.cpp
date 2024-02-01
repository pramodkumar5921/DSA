class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int n=nums.size();
        int cnt=1;
        vector<int>ans;
        for(int i=0;i<n;i++){
          if(cnt%3!=0){
              ans.push_back(nums[i]);
          }
          else if(cnt%3==0){
            ans.push_back(nums[i]);
             int first=ans[0];
             int sec=ans[2];
             if(sec-first>k){
                 return {};
             }
               res.push_back(ans);
               vector<int>temp;
               ans=temp;
           }
           cnt++;
        }
        return res;
    }
};
