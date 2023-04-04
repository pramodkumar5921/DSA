class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>st;
        int ans=1;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(st.find(s[i])==st.end()){
                st.insert(s[i]);
                continue;
            }
            if(st.find(s[i])!=st.end()){
                ans++;
                st.erase(st.begin(),st.end());
                st.insert(s[i]);
            }
        }
        return ans;
    }
};
