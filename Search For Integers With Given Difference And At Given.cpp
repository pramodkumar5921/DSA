vector<int> indicesAtGivenDistance(vector<int>& arr, int n, int k, int m)
{
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
     while(i<j){
         int val=abs(arr[i]-arr[j]);
         if(val<=m and abs(i-j)<=k){
             return {i,j};
         }
         else if(val>m){
             i++;
         }
         else{
             j--;
         }
     }
    return {0,0};
}
