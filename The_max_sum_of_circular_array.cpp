#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[10000];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=INT_MAX,index;
		for(int i=0;i<n;i++){
			if(ans>a[i]){
				ans=a[i];
				  index=i;
			}
		}
		int sum=0;
		for(int i=0;i<index;i++){
			sum=sum+a[i];
		}

		for(int i=index+1;i<=n;i++){
			sum=sum+a[i];
		}
		cout<<sum<<endl;
		cout<<endl;	
		t--;
	}
	return 0;
}
