#include<bits/stdc++.h>
using namespace  std;
vector<int>callforarray(string &str){
    int m=str.size();
    vector<int>arr(m,0);
    for(int i=1,r=0,c=0;i<str.size();i++){
        int other=2*c-i;
        if(i<r){
            arr[i]=min(arr[other],r-i);
        }
        while( i+arr[i]+1 < m and i-arr[i]-1>=0 and str[i+arr[i]+1]==str[i-arr[i]-1]){
            arr[i]++;
        }
        if(i+arr[i]>r){
            c=i;
            r=i+arr[i];
        }
    }
    return arr;
}
string longestPalinSubstring(string str) {
    string ans;
    ans+='#';
    for(int i=0;i<str.size();i++){
        ans+=str[i];
        ans+='#';
    }
   int n=ans.size();
   string res;
   vector<int>arr=callforarray(ans);
   int maxi=*max_element(arr.begin(),arr.end());
   int cnt=maxi/2;
   int cnt2=maxi/2;
    int idx=-1,temp=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>temp){
            temp=arr[i];
            idx=i;
        }
    }
    string val1,val2;
   for(int i=idx-1;i>=0;i--){
       if(ans[i]!='#'){
           val1+=ans[i];
           cnt--;
       }
       if(cnt==0){
           break;
       }
   }
   for(int i=idx+1;i<arr.size();i++){
        if(ans[i]!='#'){
           val2+=ans[i];
           cnt2--;
       }
       if(cnt2==0){
           break;
       }
   }
//    cout<<val1.size()<<endl;
//    return res;
string val3;
val3+=ans[idx];
reverse(val1.begin(),val1.end());
// for(int i=0;i<val2.size();i++){
//     cout<<val1[i]<<" ";
// }
// return 0;
if(ans[idx]=='#'){
    return val1+val2;
}
res=val1+val3+val2;
   return res;
}
