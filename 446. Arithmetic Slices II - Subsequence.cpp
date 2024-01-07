class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        unordered_map<long long,long long>mp[n];
        int result=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                long long diff=(long long)nums[i]-(long long)nums[j];
                int count_at_j=0;
                if(mp[j].find(diff)!=mp[j].end()){
                    count_at_j=mp[j][diff];
                }
                mp[i][diff]+=count_at_j+1;
                result+=count_at_j;
            }
        }
        return result;
    }
};
