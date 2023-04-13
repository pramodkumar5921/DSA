#include <vector>
#include<bits/stdc++.h>
vector<int> nextGreaterElement(vector<int> input) {
	int n=input.size();
	vector<int>v(n,-1);
	stack<int>st;
    for(int i=n-1;i>=0;i--){
		if(st.size()==0){
		   v[i]=-1;
		   st.push(input[i]);
		}
		else{
			while(st.size()>0){
				if(st.top()>input[i]){
					v[i]=st.top();
					break;
				}
				else{
					st.pop();
				}
			}
			st.push(input[i]);
		}
      
	}
	return v;
}
