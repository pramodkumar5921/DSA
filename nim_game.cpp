#include<bits/stdc++.h>
using namespace  std;
int ninjaGame(vector<int> &a, int n) {
   int ans=0;
   for(int i=0;i<n;i++){
       ans= ans^(a[i]);
   }
   if(ans==0){
       return 0;
   }
   return 1;
}
