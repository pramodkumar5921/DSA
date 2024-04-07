class Solution {
public:
    int dp[101][101];
    bool check(int idx,int open,string &s){
        if(idx==s.size()){
            return open==0;
        }
        if(dp[idx][open]!=-1){
            return dp[idx][open];
        }
        bool isvalid=false;
        if(s[idx]=='*'){
            isvalid |= check(idx+1,open+1,s);
            isvalid |= check(idx+1,open,s);
            if(open>0){
                  isvalid |= check(idx+1,open-1,s);
            }
        }
        else if(s[idx]=='('){
              isvalid |= check(idx+1,open+1,s);
        }
        else if(s[idx]==')'){
            if(open>0){
                isvalid |= check(idx+1,open-1,s);
            }
        }
        return dp[idx][open]=isvalid;
    }
    bool checkValidString(string s) {
        memset(dp,-1,sizeof(dp));
      return check(0,0,s);
    }
};
