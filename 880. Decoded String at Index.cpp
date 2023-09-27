class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' and s[i]<='z'){
                size = size+1;
            }
            else{
                size = size*(s[i]-'0');
            }
        }
        string ans;
        for(int i=s.size()-1;i>=0;i--){
            k = k%size;
            if(isalpha(s[i]) and k==0){
                return string(1,s[i]);
            }
            else if(isalpha(s[i])){
                size=size-1;
            }
            else{
                size = size/(s[i]-'0');
            }
        }
        return ans;
    }
};
