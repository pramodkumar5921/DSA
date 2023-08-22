class Solution {
public:
    string convertToTitle(int cn) {
        string res;
        while(cn>0){
            cn-=1;
            res=res+char(cn%26+'A');
            cn=cn/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
