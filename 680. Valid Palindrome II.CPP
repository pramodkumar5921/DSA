class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        int cnt=0,cnt1=0;
        while(i<=j){
            if(s[i]==s[j]){
                i++;j--;
            }
            else{
                i++;
                cnt++;
            }
        }
         i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;j--;
            }
            else{
                cnt1++;
                j--;
            }
        }
        if(cnt==0 || cnt1==0){
            return true;
        }
        if(cnt==1 || cnt1==1){
            return true;
        }
        return false;
    }
};
