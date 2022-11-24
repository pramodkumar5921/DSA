class Solution {
public:
    bool detectCapitalUse(string s) {
        int first=0;
        if(s[0]>=65 and s[0]<=91){
            first++;
        }
        int sml=0,lar=0;
        for(int i=1 ;i<s.size();i++){
            if(s[i]>=65 and s[i]<=91 ){
                lar++;
            }
            else{
                sml++;
            }
        } 
        if(first==1 and lar==s.size()-1){
            return true;
        }
        if(first==0 and sml==s.size()-1){
            return true;
        }
        if(first==1 and sml==s.size()-1){
            return true;
        }

        return false;  
    }
};
