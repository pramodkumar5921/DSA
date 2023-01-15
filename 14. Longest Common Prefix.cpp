class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
       int n=strs.size();
       int i;
       for( i=0;i<strs[0].size();i++){
           if(strs[0][i]!=strs[n-1][i]){
               break;
           }
       }
       return strs[0].substr(0,i);
    }
};
