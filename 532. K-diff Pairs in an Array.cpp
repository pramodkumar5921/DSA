class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        // int cnt=0;
        // sort(nums.begin(),nums.end());
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
        int cnt=0;
        if(k==0){
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>1){
                cnt++;
            }
        }
    }
    // unordered_set<int>st;
    // for(int i=0;i<nums.size();i++){
    //     st.insert(nums[i]);
    // }
    nums.erase(nums.begin(),nums.end());
    for(auto it:st){
        nums.push_back(it);
    }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k){
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};
