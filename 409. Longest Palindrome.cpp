class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=0;
        int maxi=0;
        for(auto it:mp){
            if(it.second%2==0){
                ans+=it.second;
            }
            else{
                ans+=(it.second-1);
                maxi=max(maxi,it.second);
            }
        }
        if(maxi==0){
            return ans;
        }
        return ans-(maxi-1)+maxi;
    }
};
