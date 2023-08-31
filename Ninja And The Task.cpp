#include<bits/stdc++.h>
using namespace std;
long long countValues(long long x) {
    vector<long long>arr;
    for(int i=1;i<32;i++){
        long long res = 1LL<<i;
        arr.push_back(res-1);
    }
   auto ans = lower_bound(arr.begin(),arr.end(),x);
     return *ans-x;
}
