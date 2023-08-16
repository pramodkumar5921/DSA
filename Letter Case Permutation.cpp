#include <bits/stdc++.h> 
using namespace std;
int n;
void solve(string s,vector<string>&res,int idx){
	 if(idx==n){
		 res.push_back(s);
		 return;
	 }
     if(s[idx]>='0' and s[idx]<='9'){
         return solve(s,res,idx+1);
     }
	 else{
		 string temp=s;
		 if(s[idx]>='a' and s[idx]<='z'){
			 
	         char ch=s[idx]-32;
	         temp[idx]=ch;  
		 }
		 else{
			//  string temp=s;
	         char ch=s[idx]+32;
	         temp[idx]=ch; 
		 }
		 solve(temp,res,idx+1);
	     solve(s,res,idx+1);
	 }
	 return;
}
vector<string> letCasePermutation(string s) 
{
	n=s.size();
   vector<string>res;
   string temp=s;
   solve(s,res,0);
   return res;
}
