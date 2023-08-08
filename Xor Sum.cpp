int xorSum(vector<int> &arr1, vector<int> &arr2)
{
    int n=arr1.size();
    int m=arr2.size();
   vector<int>v(32,0);
   for(int i=0;i<32;i++){
       int one1=0;
       for(int j=0;j<n;j++){
           if(arr1[j]&(1<<i)){
               one1++;
           }
       }
       int one2=0;
       for(int j=0;j<m;j++){
           if(arr2[j]&(1<<i)){
               one2++;
           }
       }
       v[i]=one1*one2;
   }
   long long ans=0;
   int p=1;
   for(int i=0;i<32;i++){
       if(v[i]%2==0){
           ans+=(p)*0;
       }
       else{
           ans+=(p)*1;
       }
       p=p*2;
   }
   return ans;
}
