#include<iostream>
// #include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>=1){
		int n;
	    cin>>n;
	int a[1001];
	// int n;
	// cin>>n;
	for(int i=0;i<n;i++){
		int no;cin>>no;
		a[i]=no;
	}
	int left[1001];
	int right[1001];
	left[0]=a[0];
	for(int i=1;i<n;i++){
		left[i]=max(left[i-1],a[i]);
	}
	// int right[1000001];
	right[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--){
		right[i]=max(right[i+1],a[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=(min(left[i],right[i])-a[i]);
	}
	cout<<sum<<endl;
	t--;
	}
	return 0;
}
	
