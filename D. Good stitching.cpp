#include<bits/stdc++.h>
using namespace std;
const long long mod=1e18+9;
int main(){
    unordered_map<char,int>mp;
    // for(int i)
    string str,bad;
    cin>>str>>bad;
    for(int i=0;i<bad.size();i++){
        mp[i+'a']=bad[i]-'0';
    }
    int k;
    cin>>k;
    set<long long>st;
    for(int i=0;i<str.size();i++){
        int cnt=0;long long total=0;
        for(int j=i;j<str.size();j++){
            total = ((long long)total*(26) + (str[j]-'a'+1))%mod;
            if(mp[str[j]]==0){
                cnt++;
            }
            if(cnt>k){
                break;
            }
            st.insert(total);
        }
    }
    cout<<st.size()<<endl;
    return 0;
}
