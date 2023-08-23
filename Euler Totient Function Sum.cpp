#include<bits/stdc++.h>
const int n=1000;
vector<int> eulerTotientFunction(int m){ 
    vector<int>prime;
    int p=m;
    for(int i=2;i*i<=m;i++){
        if(m%i==0){
            while(m%i==0){
                m/=i;
            }
            prime.push_back(i);
        }
    }
    if(m>1){
        prime.push_back(m);
    }
    vector<int>arr(p+1,0);
    for(int i=0;i<prime.size();i++){
        int res=prime[i];
        for(int j=res;j<=p;j=j+res){
            if (p % j == 0) {
                arr[j] = 1;
            }
        }
    }
    vector<int>ans;
    ans.push_back(1);
    for(int i=2;i<arr.size();i++){
        if(arr[i]==1){
            ans.push_back(i);
        }
    }
    return  ans;
}
