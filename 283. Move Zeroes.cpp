class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            int key=nums[i];
            
            if(mp.find(key)!=mp.end() and key!=0){
                // while(mp[key]>0){
                    ans.push_back(key);
                    // mp[key]--;
                // }
            }
            // int val=mp[key];
            // if(key==0){
            //     while(val>0){
            //         ans.push_back(0);
            //         val--;
            //     }
            // }

        }
        // for(int i=0;i<ans.size();i++){
        //     cout<<ans[i]<<" ";
        // }
        for(auto it:mp){
            int key=it.first;
            int val=it.second;
            if(key==0){
                while(val>0){
                    ans.push_back(key);
                    val--;
                }
            }
        }
        nums.erase(nums.begin(),nums.end());
        for(int i=0;i<ans.size();i++){
            nums.push_back(ans[i]);
        }

    }
};
