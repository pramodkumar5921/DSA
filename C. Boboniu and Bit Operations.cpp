#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int MOD = 1000000007;
const int N = 63;
const int blocks = 48; 
bool isvalid(int x,vector<int>&arr,vector<int>&brr){
    
    for(int i=0;i<arr.size();i++){
        bool flag=false;
        for(int j=0;j<brr.size();j++){
            int res=arr[i]&brr[j];
            if((res|x)==x){
                flag=true;
                break;
            }
            
        }
        if(flag==false){
            return false;
        }

    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    vector<int>brr(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    for(int i=0;i<(1<<9);i++){
        if(isvalid(i,arr,brr)){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
