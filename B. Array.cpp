#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int MOD = 1000000007;
const int N = 63;
const int blocks = 48; 

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    int i=0,j=0;
    pair<int,int>temp;
    temp.first=-1;
    temp.second=-1;
    int ans=INT_MAX;
    while(i<n and j<n){
        mp[arr[i]]++;
        if(mp.size()==k){
           while(mp.size()==k){
            int res=(i+1)-(j+1)+1;
            if(ans>res){
            ans=res;
            temp.first=j+1;
            temp.second=i+1;
            }
            mp[arr[j]]--;
            if(mp[arr[j]]==0){
                mp.erase(arr[j]);
            }
        
        j++;
    }
        }
        i++;
    }
    cout<<temp.first<<" "<<temp.second<<endl;
    return 0;
}
