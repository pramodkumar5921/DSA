#include <bits/stdc++.h> 
int kDiffPairs(vector < int > & arr, int n, int k) {
    sort(arr.rbegin(),arr.rend());
    set<int>seen;
    set<pair<int,int>>st;
    for(int i=0;i<n;i++){
        if(seen.count(arr[i]+k)>0){
            st.insert({arr[i],(arr[i]+k)});
        }
        seen.insert(arr[i]);
    }
    return st.size();
}
