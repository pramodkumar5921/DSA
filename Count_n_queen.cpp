#include<iostream>
using namespace std;
// int cnt;
	bool issafe(int mat[1001][1001],int i,int j,int n){
		for(int k=0;k<n;k++){
			// changeing of row
			if(mat[k][j]==1){
				return false;
			}
			// changeing of columne
			if(mat[i][k]==1){
				return false;
			}
		}
		int x=i,y=j;
		while(i>=0 and j<n){
			if(mat[i][j]==1){
				return false;
			}
			i--;j++;
		}
		i=x,j=y;
		while(i>=0 and j>=0){
			if(mat[i][j]==1){
				return false;
			}
			i--;j--;
		}
		return true;
	}
	bool solve(int mat[1001][1001],int i,int n,int &cnt){
		// basecase
		// int cnt=0;
		if(i==n){
			cnt++;
			return false;
		}
		// return false;
		// return false;
		// recursive case
		for(int j=0;j<n;j++){
			if(issafe(mat,i,j,n)==true){
				mat[i][j]=1;
				bool kyabakihua=solve(mat,i+1,n,cnt);
				if(kyabakihua==true){
					return true;
				}
			}
			mat[i][j]=0;
		}
		return false;
	}
	int main(){
	int n;
	cin>>n;
	int mat[1001][1001]={0};
	int cnt=0;
	solve(mat,0,n,cnt);
	cout<<cnt;
	return 0;
}
