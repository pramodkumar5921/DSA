#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b ){
	// basecase
	if(b==0){
		return a;
	}
	// recursive case
	return gcd(b,a%b);
}
int main() {
	int a,b;
	cin>>a>>b;
	int ans=gcd(a,b);
	cout<<(a*b)/ans;
	return 0;
}
