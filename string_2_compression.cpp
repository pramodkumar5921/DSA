#include<iostream>
using namespace std;
void string_compression(string str){
	int i=0;
	while(i<str.length()){
		int cnt=1;
		 while(i<=str.length()-2 and str[i]==str[i+1]){
			 i++;cnt++;
		 }
		 cout<<str[i];
		 if(cnt>1){
			 cout<<cnt;
		 }
		 i++;
	}
	cout<<endl;
}
int main() {
	string str;
	getline(cin,str);
	string_compression(str);
return 0;
}
