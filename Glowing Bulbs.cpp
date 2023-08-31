#include<bits/stdc++.h>
using namespace std;
long long findKthGlowingBulb(vector<int> &labels, long long k) {
	int cnt=0;
	for(int i=2;i<k*30;i++){
		for(int j=0;j<labels.size();j++){
			if(i%labels[j]==0){
				cnt++;
				break;
			}
		}
		if(cnt==k){
			return i;
		}
	}
}
