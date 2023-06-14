#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>ans;
    ans.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(ans.back()!=arr[i]){
            ans.push_back(arr[i]);
        }
        else{
            continue;
        }
    }
    int cnt=1;
    stack<long long>st;
    int inc=0,des=0;
    st.push(ans[0]);
    for(int i=1;i<ans.size();i++){
        if(st.size()==1){
            if(ans[i]>st.top()){
                inc++;
            }
            else{
                des++;
            }
            st.push(ans[i]);
        }
        else if(st.top()<ans[i] and inc>=1){
            st.push(ans[i]);
            inc++;
        }
        else if(st.top()>ans[i] and des>=1){
            st.push(ans[i]);
            des++;
        }
        else if(st.top()>ans[i] and inc>=1){
            cnt++;
            while(st.size()>0){
                st.pop();
            }
            inc=0;des=0;
            st.push(ans[i]);
        }
        else if(st.top()<ans[i] and des>=1){
            cnt++;
            while(st.size()>0){
                st.pop();
            }
            inc=0;des=0;
            st.push(ans[i]);
        }
    }
    cout<<cnt<<endl;
    return 0;
}
