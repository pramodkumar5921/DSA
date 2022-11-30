int solve(int m,int n){
  // base case 
  if(n==0 || m==0){
    return 0;
  }
  // recursive case
  choti problem=solve(m,n-1);
  return m+choti;
}
