class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int>mp;
        string row1="qwertyuiopQWERTYUIOP";
        string row2="asdfghjklASDFGHJKL";
        string row3="ZXCVBNMzxcvbnm";
        for(auto ch:row1){
            mp[ch]=1;
        }
        for(auto ch:row2){
            mp[ch]=2;
        }
        for(auto ch:row3){
            mp[ch]=3;
        }
        bool visited;
        vector<string>ans;
        for(auto &word:words){
            visited =true;
            for(int i=0;i<word.size();i++){
                if(mp[word[i]]!=mp[word[0]]){
                    visited=false;
                    break;
                }
               
            }
             if(visited){
                    ans.push_back(word);
                }
        }
        return ans;
    }
};
