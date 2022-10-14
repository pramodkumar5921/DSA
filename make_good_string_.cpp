class Solution {
public:
    string makeGood(string s) {
      stack<int>st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!st.empty()){
                if(s[i]-32==st.top()|| s[i]==st.top()-32){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string str;
        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
    
};
