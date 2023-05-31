#include <bits/stdc++.h> 
vector<int> diffSimCards(vector<int> &pack1, int n, vector<int> &pack2, int m)
{
  unordered_set<int>st;
  unordered_map<int,int>mp;
  for(int i=0;i<n;i++){
      st.insert(pack1[i]);
      mp[pack1[i]]++;
  }
  int cnt=0;
  for(int i=0;i<m;i++){
      st.insert(pack2[i]);
      if(mp.find(pack2[i])!=mp.end()){
          mp[pack2[i]]--;
          if(mp[pack2[i]]==0){
              mp.erase(pack2[i]);
          }
          cnt++;
      }
  }
  return {st.size(),cnt};
}
