class Solution {
public:
    string reverseParentheses(string s) {
        s='('+s;
        s+=')';
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                string str;
                while(st.top()!='('){
                    str+=st.top();
                    st.pop();
                }
                st.pop();
                if(st.size()==0){
                    reverse(str.begin(),str.end());
                    return str;
                }
                else{
                    int j=0;
                    while(j<str.size()){
                        st.push(str[j]);
                        j++;
                    }
                }
            }
            else{
                st.push(s[i]);
            }
        }
        return "";
    }
};
