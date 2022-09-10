#include<iostream>
using namespace std;
void print(int n,int row){
	// basecase
	if(n==0){
		return;
	}

	// recursive case
	for(int i=1;i<=row;i++){
		cout<<"*"<<"	";
	}
	cout<<endl;
	print(n-1,row+1);

}
int main() {
	int n;
	cin>>n;
	print(n,1);
	return 0;
}
