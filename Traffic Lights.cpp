#include<bits/stdc++.h>
vector<int> trafficLights(int n, int x, vector<int> &pos)
{
	vector<int>ans;
	set<int>postion;
	multiset<int>distance;
	postion.insert(0);
	postion.insert(x);
	distance.insert(x);
	for(int i=0;i<n;i++){
		auto  greateridx=postion.upper_bound(pos[i]);
		auto  smalleridx=greateridx;
		--smalleridx;
		distance.erase(distance.find(*greateridx-*smalleridx));
		distance.insert(pos[i]-*smalleridx);
		distance.insert(*greateridx-pos[i]);
		postion.insert(pos[i]);
		auto it=distance.end();
		--it;
		ans.push_back(*it);

	}
	return ans;
}
