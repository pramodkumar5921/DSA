#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(int i,int j){
    // basecase
    if(i==0 and j==0){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }
   //recursive case
    int ans1=0;
    for(int k=0;k<i;k++){
    ans1=ans1+solve(k,j);
    }
    int ans2=0;
    for(int k=0;k<j;k++){
        ans2=ans2+solve(i,k);
    }
    return ans1+ans2;
}
int main(){
    int i,j;
    cin>>i>>j;
   int ans= solve(i,j);
   cout<<ans;
    return 0;
}
