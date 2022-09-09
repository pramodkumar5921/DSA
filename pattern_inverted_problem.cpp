#include<iostream>
using namespace std;
int main() {
	int row=1;
	int n;
	cin>>n;
	while(row<=n){
		for(int i=0;i<n-row+1;i++){
		cout<<"*"<<"	";
		}
		cout<<endl;
		row=row+1;
	}
	return 0;
}
