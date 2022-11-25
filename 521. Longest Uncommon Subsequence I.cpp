class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b){
            return -1;
        }
        else{
            int alen=a.length();
            int blen=b.length();
            if(alen==blen){
                return alen;
            }
             else if(alen>blen){
                 return alen;
             }
             else{
                 return blen;
             }
        }
        return 0;
    }
};
