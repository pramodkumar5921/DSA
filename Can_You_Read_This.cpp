#include<iostream>
//#inclue<iostream>std/h++;
using namespace std;
int main() {
	char a[1001];
	cin.getline(a,1001);
	int i=0;
	while(a[i]!='\0'){
	if(a[i]>= 'A' and a[i] <= 'Z'){
			cout<<endl;
			
	}
	cout<<a[i];
	i++;
	}
	return 0;
}
