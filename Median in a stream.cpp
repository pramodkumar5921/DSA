#include<bits/stdc++.h>
using namespace std;
vector<int> findMedian(vector<int> &arr, int n) {
      int i=0;
      vector<int>ans;
      priority_queue<int>pq1;
      priority_queue<int,vector<int>,greater<int>>pq2;
      while(i<n){
          if(pq1.size()==0){
              pq1.push(arr[i]);
          }
          else if(pq1.top()>=arr[i]){
              pq1.push(arr[i]);
          }
          else if(pq1.top()<arr[i]){
              pq2.push(arr[i]);
          }
          if(pq2.size()>pq1.size()){
              int ele = pq2.top();
              pq2.pop();
              pq1.push(ele);
          }
          if(pq1.size()-pq2.size()>1){
              pq2.push(pq1.top());
              pq1.pop();
          }
          if(i%2==0){
              ans.push_back(pq1.top());
          }
          if(i%2==1){
              int ele=(pq1.top()+pq2.top())/2;
              ans.push_back(ele);
          }
          i=i+1;
      }
      return ans;
}
