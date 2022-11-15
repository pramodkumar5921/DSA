class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return *max_element(nums.begin(),nums.end());
        }
        vector<int>ans;
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        if(st.size()<3){
            return *max_element(st.begin(),st.end());
        }
        else{
            for(auto it=st.begin();it!=st.end();it++){
                ans.push_back(*it);
            }
            int m=ans.size();
            return ans[m-3];
        }
        return 0;
    }
};
