class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int length=0,carry=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second%2==1){
                carry=1;
                    length+=it->second-1;
            }
            else{
                length+=it->second;
            }
        }
        return carry+length;
    }
};
