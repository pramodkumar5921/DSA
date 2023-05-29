#include<bits/stdc++.h>
bool compare(pair<int,int>&p1,pair<int,int>&p2){
    if(p1.second<p2.second){
        return true;
    }
    return false;
}
int maxLengthChain(vector<pair<int, int>> &p, int n) {
   sort(p.begin(),p.end(),compare);
//    pair<int,int>x;
   int start=p[0].first;
   int end=p[0].second;
   int cnt=1;
   for(int i=1;i<n;i++){
    //    pair<int,int>p1;
       int x=p[i].first;
       int y=p[i].second;
       if(x>end){
           cnt++;
           start=x;
          end=y;
       }
       
   }
   return cnt;
}
