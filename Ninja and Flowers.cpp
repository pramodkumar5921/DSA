#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l=2,r=n+1;
    bool flag = false;
    vector<int>arr(r-l+1,0);
    for(int i=2;i*i<=r;i++){
        if(arr[i-l]==0){
            arr[i-l]=1;
            for(int j=i*i;j<=r;j=j+i){
                arr[j-l]=2;
                flag=true;
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            arr[i]=1;
        }
    }
    if(flag==true){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
     int cnt=0;
     int temp=0;
     for(int i=0;i<arr.size();i++){
         if(arr[i]==1){
             cnt++;
         }
         else{
             temp++;
         }
     }
     int mini=min(temp,cnt);
     int maxi=max(temp,cnt);
     cout<<mini<<" "<<maxi<<" ";
    return 0;
}
