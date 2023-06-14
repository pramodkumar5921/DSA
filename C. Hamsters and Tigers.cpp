#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<char>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<char>temp(2*n);
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }
    for(int i=n;i<2*n;i++){
        temp[i]=arr[i%n];
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]=='H'){
            k++;
        }
    }
    int i=0,j=0;
    int ans=n;
    int hamster=0,tiger=0;
    while(i<2*n){
        if(temp[i]=='H'){
            hamster++;
        }
        if(temp[i]=='T'){
            tiger++;
        }
        if(i-j+1==k){
            ans=min(ans,k-hamster);
            if(temp[j]=='H'){
                hamster--;
            }
            if(temp[j]=='T'){
                tiger--;
            }
            j++;
        }
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
