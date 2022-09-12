#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[1001];
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int t;
	cin>>t;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(a[i]+a[j]+a[k]==t){
					cout<<a[i]<< ","<<" " <<a[j]<<" "<< "and" <<" "<<a[k];
					cout<<endl;
				}
			}
		}
	}

	return 0;
}
