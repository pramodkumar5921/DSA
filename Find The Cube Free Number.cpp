#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int main(){
vector<int>arr(N+1,0);
for(int i=2 ; i*i<=N ; i++){
    if(arr[i]==0){
        for(int j=i*i;j<=N;j=j+i){
            arr[j]=1;
        }
    }
}
vector<int>temp;
for(int i=2;i<arr.size();i++){
    if(arr[i]==0){
        temp.push_back(i);
    }
}
vector<int>cube_free(N+1,0);
for(int i=0;i<temp.size();i++){
    long long res=(long long)temp[i]*temp[i]*temp[i];
    for(long long  j=res;j<=N;j=j+res){
        cube_free[j]=-1;
    }
}
int cnt=1;
for(int i=1;i<N+1;i++){
    if(cube_free[i]==0){
        cube_free[i]=cnt;
        cnt++;
    }
}
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(cube_free[n]==-1){
            cout<<"Not Cube Free"<<endl;
        } else {
            cout << cube_free[n]<<endl;
        }
    }
    return 0;
}
