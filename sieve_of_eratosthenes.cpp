#include<bits/stdc++.h>
vector<int> primeNumbersTillN(int n) 
{ 
 	vector<int>v(n+2,0);
	vector<int>ans;
	 for(int i=2;i<=n;i++){
		 if(v[i]==0){
			 v[i]=1;
			 ans.push_back(i);
			 for(int j=i*i;j<=n;j=j+i){
			     v[j]=1;
		 }

		 }
	 }
	return ans;
}
