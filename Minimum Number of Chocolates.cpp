#include<bits/stdc++.h>
using namespace std;
int getMin(int *arr, int n){
    vector<int>ans1(n,1),ans2(n,1);
    ans1[0]=1;
	for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            ans1[i] = ans1[i-1]+1;
        }
        else{
            ans1[i]=1;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
            ans2[i] = ans2[i+1]+1;
        }
        else{
            ans2[i]=1;
        }
    }
    // for(auto it:ans1){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it:ans2){
    //     cout<<it<<" ";
    // }
    // return 0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=max(ans1[i],ans2[i]);
    }
    return sum;
}
