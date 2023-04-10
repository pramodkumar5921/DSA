class Solution {
public:
    bool isValid(string s) {
        stack<int>stk;
        int i=1;
        stk.push(s[0]);
        while(i<s.size()){
            if(stk.size()==0){
                stk.push(s[i]);
            }
            else{
                char top=stk.top();
                if(top=='(' and s[i]==')'){
                    stk.pop();
                }
                else if(top=='{' and s[i]=='}'){
                    stk.pop();
                }
                else if(top=='[' and s[i]==']'){
                    stk.pop();
                }
                else if(top=='(' and s[i]!=')'){
                    stk.push(s[i]);
                }
                else if(top=='{' and s[i]!='}'){
                    stk.push(s[i]);
                }
                else if(top=='[' and s[i]!=']'){
                    stk.push(s[i]);
                }
                else if(s[i]=='{' or s[i]=='[' or s[i]=='('){
                    stk.push(s[i]);
                }
            }
            i++;
        }
         if(stk.size()==0){
             return true;
         }
         return false;
    }
};
