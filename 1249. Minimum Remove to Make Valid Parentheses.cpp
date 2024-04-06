class Solution {
public:
    string minRemoveToMakeValid(string s) {
        unordered_set<int>remove_idx;
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(st.size()==0 and s[i]=='('){
                st.push(i);
            }
            else if(st.size()!=0 and s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(st.size()>0){
                    st.pop();
                }
                else{
                    remove_idx.insert(i);
                }
            }
        }
        while(st.size()>0){
            remove_idx.insert(st.top());
            st.pop();
        }
        string str;
        for(int i=0;i<s.size();i++){
            if(remove_idx.find(i)==remove_idx.end()){
                str+=s[i];
            }
        }
        return str;
    }
};
