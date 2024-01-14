class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>mp1,mp2;
        vector<int>v1,v2;
        string s1,s2;
        for(int i=0;i<word1.size();i++){
            mp1[word1[i]]++;
        }
        for(int i=0;i<word2.size();i++){
            mp2[word2[i]]++;
        }
        for(auto it:mp1){
            s1+=it.first;
            v1.push_back(it.second);
        }
        for(auto it:mp2){
            s2+=it.first;
            v2.push_back(it.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(v1!=v2){
            return 0;
        }
        if(s2!=s1){
            return 0;
        }
        return 1;
    }
};
