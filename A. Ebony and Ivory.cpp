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
    int a,b,c;
    cin>>a>>b>>c;
    if(c%a==0 or c%b==0){
        cout<<"YES"<<endl;
        return 0;
    }
    int g=__gcd(a,b);
    if(c%g!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    int l= c/a;
    int r= c/b;
    for(int i=1;i<=l;i++){
        int res= c-(a)*i;
        for(int j=1;j<=r;j++){
            if(b*j==res){
                cout<<"YES"<<endl;
                return 0;
            }
            if(b*j>res){
                break;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
