#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n+1,0);
    for(int i=2;i*i<=n ;i++){
        if(arr[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                arr[j]=1;
            }
        }
    }
    vector<int>temp;
    for(int i=2;i<arr.size();i++){
        if(arr[i]==0){
         temp.push_back(i);
        }
  }
  unordered_set<int>st;
   int first=temp[0];
  for(int i=1;i<temp.size();i++){
      st.insert(first+temp[i]);
      first=temp[i];
  }
  int cnt=0;
  for(int i=0;i<temp.size();i++){
      int res=temp[i]-1;
      if(st.find(res)!=st.end()){
          cnt++;
      }
  }
  cout<<cnt<<endl;
    return 0;
}
