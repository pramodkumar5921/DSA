#include<iostream>
using namespace std;
int main() {
	char a[1001];
	cin.getline(a,1001);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>=65 and a[i]<=90){
			a[i]=a[i]+32;
		}
		else{
			a[i]=a[i]-32;
		}
	}
	for(int i=0;a[i]!='\0';i++){
		cout<<a[i];
	}
	return 0;
}
