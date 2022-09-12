#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[1001];
	cin.getline(a,1001);
	for(int i=0;a[i]!='\0';i++){
		if(i%2==0){
			int temp=a[i];
			temp++;
			a[i]=temp;
		}
		else{
			int flag =a[i];
			flag--;
			a[i]=flag;
		}
	}
	for(int i=0;a[i]!='\0';i++){
		cout<<a[i];
			}
	return 0;
}
