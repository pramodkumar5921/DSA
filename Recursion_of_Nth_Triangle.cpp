#include<iostream>
using namespace std;
int  sum(int n){
	// basecase
	if(n==0){
		return 0;
	}

	// recursive case
	int ch=sum(n-1);
	return ch+n;
} 
int main() {
	int n;
	cin>>n;
	cout<<sum(n);
	return 0;
}
