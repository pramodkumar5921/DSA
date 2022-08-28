#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> v(n,-1);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<int> c=v;
	int t;
	cin>>t;
	while(t>0){
		int k;
		cin>>k;
  for(int i=0;i<n;i++){
	  v[i]=c[i]+c[(n+i-k)%n];
  }
 c=v;
 t--;	
	}

int ans=0;
	for(int i=0;i<n;i++){
	 ans+=v[i];
	}
	cout<<ans;
	return 0;
}
