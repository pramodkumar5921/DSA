void sort012(int *arr, int n)
{
   int i=0,j=n-1;
   int s=0;
   while(i<=j){
       if(arr[i]==1){
           i++;
       }
       else if(arr[i]==0){
           swap(arr[s],arr[i]);
           i++;
           s++;
       }
       else if(arr[i]==2){
           swap(arr[j],arr[i]);
           j--;
       }
   }
   return;
}
