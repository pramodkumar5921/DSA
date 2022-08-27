#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
vector<int>a(n,-1);
vector<int>c(n,-1);
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=0;i<n;i++){
	int j=0;
	for(;j<n;j++){
		if(i==a[j]){
			cout<<j<<" ";
			break;
		}
		}
}		
return 0;
}
