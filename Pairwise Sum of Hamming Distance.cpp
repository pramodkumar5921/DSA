#include<bits/stdc++.h>
long long int sumOfHammingDistance(int *arr, int n) {
    int l=sizeof(arr)/sizeof(arr[0]);
    long long ans=0;
    for(int i=0;i<32;i++){
        int one=0,zero=0;
        for(int j=0;j<n;j++){
            int a=(arr[j]&(1<<i));
            if(a==0){
                zero++;
            }
            else{
                one++;
            }
         }
         ans+=(one)*(zero)*2;
    }
    return ans;
}
