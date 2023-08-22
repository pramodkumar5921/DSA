#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr(1000001,0);
    for(int i=2;i<=1000001;i++){
        if(arr[i]==0){
            for(int j=i;j<=1000001;j=j+i){
                arr[j]++;
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int l,r,n;
    cin>>l>>r>>n;
    int cnt=0;
    for(int i=l;i<=r;i++){
        if(arr[i]==n){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    }
    return 0;
}
