#include<bits/stdc++.h>
using namespace std;
bool solve(vector<long long>&arr,long long x,int idx,long long ans){
    int n=arr.size();
    if(idx==n){
        if(ans==x){
            return true;
        }
        else{
            return false;
        }
    }
    long long num=arr[idx];
    bool ans1=solve(arr,x,idx+1,ans+num);
    bool ans2=solve(arr,x,idx+1,ans-num);
    if(ans1==true or ans2==true){
        return true;
    }
    else{
        return false;
    }
    return 0;
} 
int main(){
    long long n;
    cin>>n;
    long long x;
    cin>>x;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans=arr[0];
    bool result=solve(arr,x,1,ans);
    if(result==true){
        cout<<"YES"<<'\n';
        return 0;
    }
    cout<<"NO"<<'\n';
    return 0;
}
