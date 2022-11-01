class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0){
            return 0;
        }
        if(haystack.size()<needle.size()){
            return -1;
        }
        int h=0,n=0;
        while(h<haystack.size()){
            if(haystack[h]==needle[n]){
                if(n==needle.size()-1){
                    return h-n;
                }
              h++;n++;  
            }
            else{
                h=h-n+1;
                n=0;
            }
        }
        return -1;
    }
};
