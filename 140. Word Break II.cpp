class Solution {
public:
    unordered_set<string>result;
    unordered_map<string,int>mp;
    void solve(string &s,int idx,vector<string>&temp){
        if(idx>=s.size()){
            string ans;
            for(int i=0;i<temp.size()-1;i++){
                ans+=temp[i];
                ans+=" ";
            }
            ans+=temp[temp.size()-1];
            result.insert(ans);
            return;
        }
        for(int len=1;len<=s.size();len++){
            string res=s.substr(idx,len);
            if(mp.find(res)!=mp.end()){
                temp.push_back(res);
                solve(s,idx+len,temp);
                temp.pop_back();
            }
        }
        return ;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for(int i=0;i<wordDict.size();i++){
            mp[wordDict[i]]++;
        }
        vector<string>temp;
        solve(s,0,temp);
        vector<string>ans;
        for(auto it:result){
            ans.push_back(it);
        }
          return ans;
    }
};
