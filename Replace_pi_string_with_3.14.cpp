#include<iostream>
using namespace std;
void solve(string s,int i,int n){
// basecase
if(i>n-1){
	return;
}

// recursive case
if(s[i]=='p' and s[i+1]=='i'){
	cout<<"3.14";
	solve(s,i+2,n);
}
else if(s[i+1]=='p' and s[i+2]=='i'){
	cout<<s[i]<<"3.14";
	solve(s,i+3,n);
}
else{
	cout<<s[i]<<s[i+1];
	solve(s,i+2,n);
}

}
int main(){
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		solve(s,0,s.size());
		cout<<endl;
	}
	return 0;
}
