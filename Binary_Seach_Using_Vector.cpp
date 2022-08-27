#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int>v(n,-1);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int s=0,e=n-1;
	int k;
	cin>>k;
	while(s<=e){
		int mid=(s+e)/2;
		if(v[mid]==k){
			cout<<mid;
			return 0;
		}
		else if(v[mid]<k){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	
	cout<<-1;

	return 0;
}
