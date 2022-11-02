class Solution {
public:
    string reverseVowels(string s) {
        string sample="aeiouAEIOU";
        unordered_set<char>st;
        for(int i=0;i<sample.size();i++){
            char key=sample[i];
            st.insert(key);
        }
       vector<string>v;
    for(int i=0;i<s.size();i++){
        char key=s[i];
        if(st.find(key)!=st.end()){
            v.push_back(key);
        }
}
        string ans="";
        
        for(int i=0;i<s.size();i++){
            char s1=s[i];char v1=v[s.size()-1-i];
            if(st.find(s1)!=st.end()){
                ans=ans+v1;
            }
            else{
                ans=ans+s1;
            }
        }
        return ans;
    }
};
