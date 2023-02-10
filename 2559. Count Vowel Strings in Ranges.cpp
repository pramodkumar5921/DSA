class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        string str="aeiou";
        set<char>st;
        for(int i=0;i<str.size();i++){
            st.insert(str[i]);
        }
        unordered_map<int,int>mp;
        for(int i=0;i<words.size();i++){
             string temp=words[i];
            if(st.find(temp[0])!=st.end() and st.find(temp[words[i].size()-1])!=st.end()){
                mp[i]=1;
            }
            
        }
        int n=words.size();
        int dp[n];
        memset(dp,0,sizeof(dp));
        if(mp.find(0)!=mp.end()){
            dp[0]=1;
        }
        else{
            dp[0]=0;
        }
        for(int i=1;i<n;i++){
            if(mp.find(i)!=mp.end()){
                dp[i]=dp[i-1]+1;
            }
            else{
                dp[i]=dp[i-1];
            }
        }
        for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
        }
        
     vector<int>ans;
        for(int i=0;i< queries.size();i++){
            int a= queries[i][0];
            int b= queries[i][1];
            if(a-1<0){
                ans.push_back(dp[b]);
            }
            else{
                ans.push_back(dp[b]-dp[a-1]);
            }
        }
        return ans;
    }
};
