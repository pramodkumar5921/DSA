#include<iostream>
using namespace std;
void solve(int n){
	// basecase
 if(n==0){
	 return;
 }

	// recursive case
	// choti problem 
	solve(n/10);
	int ld = n%10;
	if(ld==0){
		cout<<5;
	}
	else{
		cout<<ld;
	}

}
int main () {
	int n;
	cin>>n;
	solve(n);
	return 0;
}
