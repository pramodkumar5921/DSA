#include<bits/stdc++.h>
string reverseString(string &str){
		vector<string>ans;
		int j=0;
		int n=str.size();
		str.push_back('\0');
		for(int i=0;i<n and str[i]!='\0';){
			string p;
			while(str[j]!=' ' and j<n){
				p.push_back(str[j]);
				j++;
			}
			ans.push_back(p);
			while(str[j]==' ' and str[j]!='\0'){
				j++;
			}
			i=j;
		}
		string cnt;
		for(int i=ans.size()-1;i>=0;i--){
			cnt+=ans[i];
			cnt+=" ";
		}
		return cnt;
}
