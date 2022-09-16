#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mazeways(int i,int j){
    // basecase 
    if(i==0 and j==0){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }
    // recursive case
    return mazeways(i,j-1)+mazeways(i-1,j);
}
int main(){
    int i,j;
    cin>>i>>j;
   int ans= mazeways(i,j);
   cout<<ans;
   return 0;
}
