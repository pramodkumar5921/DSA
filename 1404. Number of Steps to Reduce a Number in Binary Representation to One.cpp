class Solution {
public:
    void add(string &s){
        bool flag=true;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                s[i]='0';
            }
            else{
                s[i]='1';
                flag=false;
                break;
            }
        }
        if(flag==true){
            s='1'+s;
        }
        return;
    }
    void half(string &s){
        string ans;
        int n=s.size();
        for(int i=0;i<s.size()-1;i++){
            ans+=s[i];
        }
        int i=ans.size()-1,j=s.size()-1;
        while(i>=0 and j>=0){
            s[j]=ans[i];
            i--;j--;
        }
        s[j]='0';
    }
    bool check(string &s){
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'){
                return false;
            }
        }
        if(s[n-1]=='0'){
            return false;
        }
        return true;
    }
    int numSteps(string s) {
        int ans=0;
        while(check(s)==false){
            if(s[s.size()-1] == '1'){
                add(s);
            }
            else{
                half(s);
            }
            ans++;
        }
        return ans;
    }
};
