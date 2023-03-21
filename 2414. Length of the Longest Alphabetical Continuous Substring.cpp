class Solution {
public:
    int longestContinuousSubstring(string s) {
       int l=0;
       int ans=1;
       for(int i=1;i<s.size();i++){
           int m=s[i]-'a';
           int n=s[i-1]-'a';
           if(m-n==1){
               ans=max(ans,i-l+1);
           }
           else{
               l=i;
           }
       } 
       return ans;
    }
};
