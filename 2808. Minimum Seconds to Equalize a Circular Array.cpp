class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(2*n);
        for(int i=0;i<n;i++){
            v[i]=nums[i];
        }
        for(int i=n;i<2*n;i++){
            v[i]=nums[i%n];
        }
        map<int,vector<int>>mp;
        for(int i=0;i<v.size();i++){
            mp[v[i]].push_back(i);
        }
        vector<int>temp1;
        for(auto it:mp){
            int ans=0;
            int temp=it.second[0];
            for(int i=1;i<it.second.size();i++){
                ans=max(ans,(it.second[i]-temp)/2);
                temp=it.second[i];
            }
            temp1.push_back(ans);
        }
        return *min_element(temp1.begin(),temp1.end());
    }
};
