class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        long long ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]*k]++;
        }
        for(int i=0;i<nums1.size();i++){
            int ele=nums1[i];
            if(ele%k!=0){
                continue;
            }
            else{
                for(int j=1;j*j<=ele;j++){
                    if(ele%j!=0){
                        continue;
                    }
                    else{
                        ans+=mp[j];
                        if(j!=(ele)/j){
                            ans+=mp[ele/j];
                        }
                    }
                }
            }
        }
        return ans;
    }
};
