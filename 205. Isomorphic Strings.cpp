class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=t[i];
            }
            else if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]){
                    return false;
                }
            }
        }
         unordered_map<char,char>mp1;
        for(int i=0;i<s.size();i++){
            if(mp1.find(t[i])==mp1.end()){
                mp1[t[i]]=s[i];
            }
            else if(mp1.find(t[i])!=mp1.end()){
                if(mp1[t[i]]!=s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};
