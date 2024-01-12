class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_map<char,int>mp;
        string str="aeiouAEIOU";
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
        }
        int cnt1=0,cnt2=0;
        for(int i=0;i<s.size()/2;i++){
            if(mp.find(s[i])!=mp.end()){
                cnt1++;
            }
        }
        for(int i=s.size()/2;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                cnt2++;
            }
        }
        return cnt1==cnt2;
    }
};
