class Solution {
public:
    unordered_set<string>st;
    int n;
    int t[301];
    bool solve(int idx,string &s){
        // base case
        if(idx==n){
            return true;
        }
        if(t[idx]!=-1){
            return t[idx];
        }
        // recursive case
        for(int l=1;l<=n;l++){
            string temp=s.substr(idx,l);
            if(st.find(temp)!=st.end() and solve(idx+l,s)){
                return t[idx]=true;
            }
        }
        return t[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        for(auto it: wordDict){
            st.insert(it);
        }
        memset(t,-1,sizeof(t));
        n=s.size();
        return solve(0,s);
    }
};
