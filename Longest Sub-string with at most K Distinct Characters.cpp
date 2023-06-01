#include<bits/stdc++.h>
int getLengthofLongestSubstring(int k, string s)
{
 int i=0,j=0;
 unordered_map<char,int>mp;
 int ans=0;
 while(i<s.size()){
    mp[s[i]]++;
    if(mp.size()<=k){
       ans=max(ans,i-j+1);
    }
    else{
       while(j<i and mp.size()>k){
          mp[s[j]]--;
          if(mp[s[j]]==0){
             mp.erase(s[j]);
          }
          j++;
       }
    }
    i++;
 }
 return ans;
}
