class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        unordered_set<int>st2,st1;
        for(int i=0;i<nums2.size();i++){
            st2.insert(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            st1.insert(nums1[i]);
        }
        vector<int>v1,v2;
        for(int i=0;i<nums1.size();i++){
            if(st2.find(nums1[i])==st2.end()){
                v1.push_back(nums1[i]);
                st2.insert(nums1[i]);
            }
        }
       
        ans.push_back(v1);
        for(int i=0;i<nums2.size();i++){
            if(st1.find(nums2[i])==st1.end()){
                v2.push_back(nums2[i]);
                st1.insert(nums2[i]);
            }
        }
        ans.push_back(v2);
        return ans;
    }
};
