#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1>>n2;
	for(int i=1;i<=n1;i++){
		if((3*i+2)%n2!=0){
			cout<<(3*i+2)<<endl;
		}
		else{
			n1=n1+1;
		}
	}
	return 0;
}
