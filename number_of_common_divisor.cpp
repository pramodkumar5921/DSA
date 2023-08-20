#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int numOfDiv(int num) {
    int cnt = 0;
    for(int i=1;i*i<=num;i++) {
        if(num%i == 0) {
            if(num/i == i)
                cnt++;
            else
                cnt += 2;
        }
    }
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        int GCD = __gcd(a,b);
        int cnt = numOfDiv(GCD);
        cout<<cnt<<endl;
    }
}
