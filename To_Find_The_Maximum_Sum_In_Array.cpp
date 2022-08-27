#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	cout<<endl;
	vector<int>v(n,-1);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int ans=INT_MIN;
	for(int i=0;i<n;i++){
		if(v[i]>ans){
			ans=v[i];
		}
	}
	cout<<ans;

	return 0;
}
