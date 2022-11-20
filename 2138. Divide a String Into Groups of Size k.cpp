class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.size();
        int rem=n%k;
        int m=k-rem;
        if(n%k!=0){
            for(int i=0;i<m;i++){
                s.push_back(fill);
            }
        }
        cout<<s<<endl;
        vector<string>v;
        string ans;int cnt=0;
        for(int i=0;i<s.size();i++){
             cnt++;
            ans+=s[i];
            if(cnt==k){
                v.push_back(ans);
                ans="";
                cnt=0;
                continue;
            }
        }
        return v;
    }
};
