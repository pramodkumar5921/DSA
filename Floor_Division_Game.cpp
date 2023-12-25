#include<bits/stdc++.h>
using namespace std;
vector<int>val={0, 1, 2, 2, 3, 3, 0, 0, 0, 0, 0, 0, 1};
long long grundyval(long long a){
	while(a>12){
		a=a/12;
	}
	return val[a];
}
string game(int n, vector<long long> A){
	long long ans=0;
	for(int i=0;i<n;i++){
		long long ele=grundyval(A[i]);
		ans=(long long)ans^ele;
	}
	if(ans==0){
		return "Michael";
	}
	return "Jack";
}
