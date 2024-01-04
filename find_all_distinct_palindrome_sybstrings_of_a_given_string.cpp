#include<bits/stdc++.h>
using namespace std;
vector<string> distinctPalindrome(string &s){
    unordered_set<string>st;
    // odd length pqlindrome code
    int n=s.size();
    for(int i=0;i<n;i++){
        int left=i,right=i;
        while(left>=0 and right<n and s[left]==s[right]){
            st.insert(s.substr(left,right-left+1));
            left--;right++;
        }
    }
    // even length of palidrome 
    for(int i=0;i<n-1;i++){
        int left=i,right=i+1;
        while(left>=0 and right<n and s[left]==s[right]){
            st.insert(s.substr(left,right-left+1));
            left--;right++;
        }
    }
    vector<string>ans;
    for(auto const&palindrome:st){
        ans.push_back(palindrome);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
