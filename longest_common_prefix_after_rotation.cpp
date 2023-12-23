#include<bits/stdc++.h>
using namespace std;
vector<int>calzarray(string str){
    int n=str.size();
    vector<int>z(n,0);
    for(int i=1,l=0,r=0;i<n;i++){
        if(i<=r){
            z[i]=min(z[i-l],r-i+1);
        }
        while(i+z[i]<n and str[i+z[i]]==str[z[i]]){
            z[i]++;
        }
        if(i+z[i]-1>r){
            l=i;
            r=i+z[i]-1;
        }
    }
    return z;
}
int minimumRequiredShifts(string a, string b){
	string str;
	str=a+'#'+b;
	vector<int>zarray=calzarray(str);
	// int maxi=*max_element(zarray.begin(),zarray.end());
    int maxi=INT_MIN;
	int ans=-1;
	for(int i=a.size()+1;i<str.size();i++){
		if(zarray[i]>maxi){
            maxi=zarray[i];
            ans=i;
        }
	}
    if(ans==0){
        return 0;
    }
	return ans-1-a.size();
}
