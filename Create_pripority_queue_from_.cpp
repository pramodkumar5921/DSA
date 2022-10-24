int main(){
  int arr[]={15,20,10};
  priority_queue<int>pq[arr,arr+3];
  while(pq.empty()==false){
    cout<<pq.top();
    pq.pop();
  }
  /////////////
  vector<int>vec={15,10,20};
  priority_queue<int>pq(vec.begin(),vec.end()){
  }
  time complexity :
  push,pop==log(n);
  empty()
  size()
   top() o(1);
  
