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
	int t;
	cin>>t;
	int i;
	int ch=0;
	for(i=0;i<n;i++){
		if(t==v[i]){
			ch+=1;
			break;
		}
	}
	if(ch==1){
cout<<i;
	}
	
	if(ch==0){
		cout<<-1;
	}
	return 0;
}
