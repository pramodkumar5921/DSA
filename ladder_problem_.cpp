#include<iostream>
using namespace std;
int main() {
	int row=1,n;
	cin>>n;
	int i=1;
	int no=1;
	while(row<=n)
	{
		i=1;
		while(i<=row)
		{
			
			cout<<no<<'\t';
			no=no+1;
			i=i+1;

		}
		cout<<endl;
		row =row+1;
	}

	return 0;
}
