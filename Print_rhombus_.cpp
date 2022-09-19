#include<iostream>
using namespace std;
int main()
{
	int row=1,n;
	cin>>n;
	while(row<=n)
	{
		for(int i=1;i<=n-row;)
		{
			cout<<" ";
			i=i+1;
		}
		if(row==1 or row==n)
		{
			for(int i=1;i<=n;)
			{
				cout<<"*";
				i=i+1;
			}
		}
		else
		{
			cout<<"*";
			for(int i=1;i<=n-2;)
			{
				cout<<" ";
				i=i+1;
			}
			cout<<"*";
		}
		cout<<endl;
		row=row+1;
	}

return 0;
}
