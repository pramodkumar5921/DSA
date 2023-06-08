#include<bits/stdc++.h>
int requiredCandies(vector < int > &students) {
    int n=students.size();
    vector<int>temp(n,1);
    for(int i=1;i<n;i++){
        if(students[i]>students[i-1]){
            temp[i]=temp[i-1]+1;
        }
     }
    for(int i=n-2;i>=0;i--){
        if(students[i]>students[i+1] and temp[i]<=temp[i+1]){
            temp[i]=temp[i+1]+1;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=temp[i];
    }
    return ans;
}
