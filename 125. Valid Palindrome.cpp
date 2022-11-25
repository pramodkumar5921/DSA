class Solution {
public:
    bool isPalindrome(string s) {
       if(s.size()==0){
           return true;
       }
       string ans;
       for(int i=0;i<s.size();i++){
           if(s[i]>='A' and s[i]<='Z'){
               ans+=(s[i]+32);
           }
           else if(s[i]>='a' && s[i]<='z'){
               ans+=s[i];
           }
           else if(s[i]>='0' and s[i]<='9'){
               ans+=(s[i]);
           }
           else{
               continue;
           }
       }
       for(int i=0;i<ans.size();i++){
           cout<<ans[i]<<" ";
       } 
    //    return true;
    int i=0,j=ans.size()-1;
    while(i<j){
        if(ans[i]!=ans[j]){
            return false;
        }
        i++;j--;
    }
    return true;
    }
};
