#include<bits/stdc++.h>
using namespace std;
bool check(long long mid,long long d,long long a,long long m,long long b,long long x){
	long long amount=0;
	long long cnt=(mid)/(m+1);
	x=x-(b*cnt);
	amount=(mid-cnt)*a;
	return amount>=x;
}
void solve(){
	long long d,a,m,b,x;
	cin>>d>>a>>m>>b>>x;
	long long left=1;
	long long right=x;
	long long ans=0;
	while(left<=right){
		long long mid=left+(right-left)/2;
		if(check(mid,d,a,m,b,x-d)){
			ans=mid;
			right=mid-1;
		}
		else{
			left=mid+1;
		}
	}
	cout<< ans<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
