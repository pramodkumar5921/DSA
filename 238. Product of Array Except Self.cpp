class Solution {
public:
    bool findzero(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return true;
            }
        }
        return false;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1;
        vector<int>v;int nzero=1;
        for(int i=0;i<nums.size();i++){
            pro*=nums[i];
            // cout<<pro<<endl;
            if(nums[i]==0){
                continue;
            }
            nzero*=nums[i];
        }
        cout<<pro<<endl;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        if(findzero(nums)==false){
        for(int i=0;i<nums.size();i++){
            v.push_back((pro)/nums[i]);
        }
        return v;
    }
    else{
        if(mp[0]>1){
            for(int i=0;i<nums.size();i++){
                v.push_back(0);
            }
            return v;
        }
         if(mp[0]==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    v.push_back(0);
                }
                else if(nums[i]==0){
                    // cout<<endl;
                    cout<<pro<<endl;
                    v.push_back(nzero);
                }
            }
        }
        return v;
    }
    return nums;
}
};
