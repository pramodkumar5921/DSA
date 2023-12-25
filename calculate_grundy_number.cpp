#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>res={0, 1, 2, 2, 3, 3, 0, 0, 0, 0, 0, 0, 1};
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        while(n>12){
            n=n/12;
        }
        cout<<res[n]<<endl;
    }
    return 0;
}
