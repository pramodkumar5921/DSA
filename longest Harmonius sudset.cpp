class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mp; 
        int maxsum=0,sum=0;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto i:mp){
            maxsum=max(maxsum,sum);
           int  val=i.first+1;
            if(mp.find(val)!=mp.end()){
                sum=i.second+mp[val];
            }
        }
        return maxsum;
    }
};
