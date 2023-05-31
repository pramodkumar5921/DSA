#include <bits/stdc++.h> 
int findPairSum(vector<int> arr, int target)
{
   int max_idx=-1;
   int min_idx=-1;
   int maxi=INT_MIN,mini=INT_MAX;
   int n=arr.size();
   for(int i=0;i<n;i++){
       if(maxi<arr[i]){
           maxi=arr[i];
           max_idx=i;
       }
   }
   for(int i=0;i<n;i++){
       if(mini>arr[i]){
           mini=arr[i];
           min_idx=i;
       }
   }
//    cout<<min_idx<<endl;
//    cout<<max_idx<<endl;

   bool flag=false;
   while(true){
       if( min_idx==max_idx){
           return flag;
       }
       else if(target==arr[min_idx]+arr[max_idx]){
           flag=true;
           return flag;
       }
       else if(target>arr[min_idx]+arr[max_idx]){
           min_idx=(min_idx+1)%n;
           
       }
       else{
           max_idx=(max_idx+n-1)%n;
       }
   }
   return flag;
}
