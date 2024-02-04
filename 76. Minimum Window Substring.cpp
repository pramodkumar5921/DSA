class Solution {
public:
    bool check(map<char,int>&mp1,map<char,int>&mp2){
        for(auto it:mp1){
            char ch=it.first;
            int freq=it.second;
            if(mp2.find(ch)==mp2.end()){
                return false;
            }
            else if(mp2.find(ch)!=mp2.end()){
                if(mp2[ch]<mp1[ch]){
                    return false;
                }
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        // Edges cases.
        if(s.size()<t.size()){
            return "";
        }
        map<char,int>mp1,mp2,mp3;
        for(int i=0;i<t.size();i++){
            mp1[t[i]]++;
        }
        for(int i=0;i<s.size();i++){
            mp3[s[i]]++;
        }
        // Edges cases
        for(auto it:mp1){
            if(mp3.find(it.first)==mp3.end()){
                return "";
            }
            if(mp3[it.first]<mp1[it.first]){
                return "";
            }
        }
        // main code start from Here
        int i=0,j=0;
        string ans=s,temp;
        while(i<s.size() and j<s.size()){
            mp2[s[i]]++;
            temp+=s[i];
            while(check(mp1,mp2)==true and j<s.size()){
                 if(temp.size()<ans.size()){
                    ans=temp;
                }
                    mp2[s[j]]--;
                    temp.erase(0,1);
                    if(mp2[s[j]]==0){
                        mp2.erase(s[j]);
                    }
                    j++;
            }
            i++;
        }
        return ans;
    }
};
