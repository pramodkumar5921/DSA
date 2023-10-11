class Solution {
public:
    int minOperations(vector<int>& nums) {
        // brute force
        int result=INT_MAX;
        int n=nums.size();
        set<int>st(nums.begin(),nums.end());
        vector<int>temp(st.begin(),st.end());
        for(int i=0;i<temp.size();i++){
            int l=temp[i];
            int r=l+n-1;
            int j=upper_bound(temp.begin(),temp.end(),r)-temp.begin();
            int inrange=j-i;
            result=min(result,n-inrange);
        }
        return result;
    }
};
