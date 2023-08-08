#include<bits/stdc++.h>
vector<int> findRepeatingAndMissingNumbers(vector<int> nums)
{
   int x=0,y=0;
   int n=nums.size();
   int res=0;
   for(int i=0;i<n;i++){
       res=res^nums[i];
   }
   for(int i=1;i<=n;i++){
       res=res^i;
   }
   int setbit=res&~(res-1);
   for(int i=0;i<n;i++){
       if(nums[i]&setbit){
           x=x^nums[i];
       }
       else{
           y=y^nums[i];
       }
   }
   for(int i=1;i<=n;i++){
       if(i&setbit){
           x=x^i;
       }
       else{
           y=y^i;
       }
   }
   vector<int>ans;
  bool flag=false;
  for(int i=0;i<n;i++){
      if(x==nums[i]){
          flag=true;
          break;
      }
  }
  if(flag==false){
      return {y,x};
  }
  return {x,y};

}
