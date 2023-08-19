#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l,r;
    cin>>l>>r;
    int n=r-l;
    vector<int>arr(n+1,0);
    for(int i=2;i*i<=r;i++){
            int start=-1;
            if(l%i==0){
                start=(l/i)*i;
            }
            else{
                start=(l/i)*i+i;
            }
            for(int j=start;j<=r;j=j+i){
                arr[j-l]=1;
            }
    }
    if(l>=1 and l<3){
        cout<<2<<" "<<3<<" ";
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            if(i+l>=2){
                cout<<i+l<<" ";
            }
        }
    }
    cout<<endl;
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
