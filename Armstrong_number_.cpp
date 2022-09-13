#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rem,len=0;
	int ans=0;
	int d=n;
	int digit=n;
	while(d>0){
		len=len+1;
		d=d/10;
	}
	for(int i=0;i<len;i++){
		rem=digit%10;
		ans=ans+pow(rem,len);
		digit=digit/10;
	}
	// cout<<ans<<endl;
	if(ans==n){
		cout<<"true";
	}
	else{
		cout<<"false";
	}

	return 0;
}
