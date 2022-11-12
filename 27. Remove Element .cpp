class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        vector<int>ans;
        int n=nums.size();
        nums.erase(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int key=nums[i];
            if(st.find(key)!=st.end() and key!=val){
                nums.push_back(key);
            }
            else{
                ans.push_back(key);
            }
        }
        return nums.size();
    }
};
