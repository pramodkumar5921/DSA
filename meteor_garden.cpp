#include<bits/stdc++.h>
// using namespace
bool meteorGarden(int xc, int yc, int rad, int x1, int y1, int x2, int y2) {
	vector<vector<int>>temp;
	temp.push_back({x1,y1});
	temp.push_back({x1,y2});
	temp.push_back({x2,y2});
	temp.push_back({x2,y1});

	vector<vector<int>>mid;
	for(int i=0;i<temp.size()-1;i++){
		int a=(temp[i][0]+temp[i+1][0])/2;
		int b=(temp[i][1]+temp[i+1][1])/2;
		mid.push_back({a,b});
	}
	int a=(temp[3][0]+temp[0][0])/2;
	int b=(temp[3][1]+temp[0][1])/2;
	mid.push_back({a,b});
	for(int i=0;i<mid.size();i++){
		int a=mid[i][0];
		int b=mid[i][1];
		long long ans=(long long)(a-xc)*(a-xc) + (long long)(b-yc)*(b-yc)-(long long)(rad)*(rad);
		if(ans<=0){
			return true;
		}
	}
	for(int i=0;i<temp.size();i++){
		int a=temp[i][0];
		int b=temp[i][1];
		long long ans=(long long)(a-xc)*(a-xc) + (long long)(b-yc)*(b-yc)-(long long)(rad)*(rad);
		if(ans<=0){
			return true;
		}
	}
	return false;
}
