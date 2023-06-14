#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int ele=arr[i];
        int j;
        for( j=i-1;j>=0;j--){
            if(arr[j]>ele  and abs(arr[j]-ele)<=1){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=ele;
    }
    
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
