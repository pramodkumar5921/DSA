#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1001];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<endl;
    }
    int t;
    cin>>t;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==t){
                cout<<a[i]<<" "<<"and"<<" "<<a[j];
                cout<<endl;
            }
            // cout<<endl;
        }
    }
    return 0;
}
