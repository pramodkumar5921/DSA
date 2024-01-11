#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	unordered_map<int,long long>result;
	unordered_map<int,int>divisors;
	unordered_map<int,int>nextdivisors;

	for(int i=0;i<n;i++){
		nextdivisors.clear();

		for(auto &p:divisors){
			nextdivisors[__gcd(p.first,v[i])]+=p.second;
		}

		nextdivisors[v[i]]++;
		swap(nextdivisors,divisors);

		for(auto &p:divisors){
			result[p.first]+=p.second;
		}
	}
	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout<<result[x]<<endl;
	}
    return 0;
}
