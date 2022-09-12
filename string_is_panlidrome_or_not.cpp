#include<iostream>
#include<bits/stdc++.h>
// #include<bits/stdc.h++>
using namespace std;
int main() {
	char a[1001];
	cin.getline(a,1001);
	int ans=0;
	int n=0;
	for(int i=0;a[i]!='\0';i++){
		n++;
	}
	int i=0,j=n-1;
	while(i<=j){
		if(a[i]==a[j]){
			ans++;
		}
		else{
			cout<<"false";
			break;
		}
		i++;j--;
	}
	if(ans>0){
		cout<<"true";
	}
	return 0;
}
