#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int inverse(int a,int b,int &x,int &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int g = inverse(b,a%b,x1,y1);
    x = y1;
    y = x1-(a/b)*y1;
    return g;
}
void solve(){
    int n,p;
    cin>>n>>p;

    if(n>=p){
        cout<<0<<endl;
        return;
    }
    int res  = p-1;
    for(int i=p-1;i>n;i--){
        int x,y;
        inverse(i,p,x,y);
        x = ((x%p)+p)%p;
        res = (res%p*(x%p))%p;
    }
    cout<<res<<endl;
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
