class Solution {
public:
    int maxDepth(string s) {
        string str;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]==')'){
                str+=s[i];
            }
        }
        vector<int>left(str.size(),0);
        vector<int>right(str.size(),0);
        if(str[0]=='('){
            left[0]=1;
        }
        if(str[0]==')'){
            right[0]=1;
        }
        for(int i=1;i<str.size();i++){
            if(str[i]=='('){
                left[i]=left[i-1]+1;
            }
            else{
                left[i]=left[i-1];
            }
        }
         for(int i=1;i<str.size();i++){
            if(str[i]==')'){
                right[i]=right[i-1]+1;
            }
            else{
                right[i]=right[i-1];
            }
        }
        int ans=0;
        for(int i=0;i<str.size();i++){
            ans=max(ans,left[i]-right[i]);
        }
        return ans;
    }
};
