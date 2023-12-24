#include<bits/stdc++.h>
using namespace std;
vector<int>calllps(string s){
	int m=s.size();
	vector<int>lps(m,0);
	int len=0;
	lps[0]=0;

	int i=1;
	while(i<m){
		if(s[i]==s[len]){
			len++;
			lps[i]=len;
			i++;
		}
		else{
			if(len!=0){
				len=lps[len-1];
			}
			else{
				lps[i]=0;
				i++;
			}
		}
	}
	return lps;
}
int minCharsforPalindrome(string str) {
	string ans=str;
	reverse(str.begin(),str.end());
	string s=ans+'#'+str;
	vector<int>lps=calllps(s);
	return str.size()-lps[lps.size()-1];
}
