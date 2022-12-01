void  fun(int i,int n){
  // base case
  if(i>=n){
    return ;
  }
  // recursive case
  cout<<i<<endl;
  fun(i+1,n);
  
  int main(){
    cout<<fun(1,n)<<endl;
  }
  //// out put
  1
  2
  3
  4
void fun(int i,int n){
    // base case
    if(i<1){
      return ;
    }
    
    // recursive case
    cout<<i<<endl;
    fun(i-1,n);
    int main(){
      cout<<fun(n,n)<<endl;
    }
    /// output 
    4
    3
    2
    1
