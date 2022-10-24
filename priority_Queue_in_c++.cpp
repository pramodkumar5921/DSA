#include<queue>
using namespace std;
int main(){
  priority_queue<int>pq;
  pq.push(10);
  pq.push(14);
  pq.push(5);
  cout<<pq.size();
  cout<pq.top();
  while(pq.empty()==false){
    cout<<pq.top();
    pq.pop();
  }
}
////////////////
#include<queue>
using namespace std;
int main(){
  priority_queue<int,vector<int>,greater<int>pq;
  pq.push(10);
  pq.push(15);
  pq.push(5);
  cout<<pq.size();
  cout<<pq.top();
  while(pq.empty()==false){
    cout<<pq.top();
    pq.top();
  }
}
/////////////////////////////
vector<int>:-used vector as a underlying containter to store data values 
// Greter<int>:- easy to under stand whenever we want to reverse some data values we have to use it;
    
    

  
  
