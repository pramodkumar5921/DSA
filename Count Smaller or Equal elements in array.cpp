#include <bits/stdc++.h> 
vector < int > countSmallerOrEqual(int * a, int * b, int n, int m) {
      vector<int>ans;
      sort(b,b+m);
      for(int i=0;i<n;i++){
          int idx=upper_bound(b,b+m,a[i])-b;
          ans.push_back(idx);
      }
      return ans;
}
