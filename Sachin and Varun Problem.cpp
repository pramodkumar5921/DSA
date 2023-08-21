#include<bits/stdc++.h>
using namespace std;
long long extentded(long long  a,long long b,long long  &x,long long &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    long long  x1,y1;
    long long g=extentded(b, a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
}
void solve(){
    long long  a,b,d;
    cin>>a>>b>>d;
    long long g,x,y;
    g=extentded(a,b,x,y);
    if (d % g == 0) {
        x = x * (d / g);
        y = y * (d / g);
        long long l = ceil(-1.0 * x / (b / g));
        long long r = floor(1.0 * y / (a / g));
        if (l > r)
          cout << 0 << endl;
        else
          cout << (r - l + 1) << endl;
    }
    else{
        cout<<0<<endl;
        return;
    }
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
