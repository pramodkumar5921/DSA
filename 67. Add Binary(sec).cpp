class Solution {
public:
    string addBinary(string a, string b) {
        int len1=a.size();
        int len2=b.size();
        string ans;
        if(len1>len2){
            reverse(b.begin(),b.end());
            while(a.size()!=b.size()){
                b+='0';
            }
            reverse(b.begin(),b.end());
        }
        if(len1<len2){
            reverse(a.begin(),a.end());
            while(a.size()!=b.size()){
                a+='0';
            }
            reverse(a.begin(),a.end());
        }
        int i=a.size()-1;
        int c=0;
        // cout<<a<<" ";
        // cout<<b<<" ";
        while(i>=0){
            if(b[i]-'0'+a[i]-'0'+c==1){
                ans+='1';
                c=0;
            }
            else if(b[i]-'0'+a[i]-'0'+c==0){
                ans+='0';
                c=0;
            }
            else if(b[i]-'0'+a[i]-'0'+c==2){
                ans+='0';
                c=1;
            }
            else if(b[i]-'0'+a[i]-'0'+c==3){
                ans+='1';
                c=1;
            }
            i--;
        }
        if(c==1){
            ans+='1';
            reverse(ans.begin(),ans.end());
        }
        else if(c==0){
            reverse(ans.begin(),ans.end());
        }
        return ans;
    }
};
