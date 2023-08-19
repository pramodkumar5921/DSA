#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int MOD = 1000000007;
const int N = 63;
const int blocks = 48; 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        cout<<1<<endl;
        return 0;
    }
    int l=2;
    int r=n+1;
    vector<int>arr(r-l+1,0);
    int flag=false;
    for(int i=2;i*i<=r;i++){
        if(arr[i-l]==0){
            arr[i-l]=1;
            for(int j=i*i;j<=r;j=j+i){
                arr[j-l]=2;
                flag=true;
            }
        }
    }
    if(flag==true){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
    for(int i=0;i<arr.size();i++){
       if(arr[i]==0){
           cout<<1<<" ";
       }
        else{
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
