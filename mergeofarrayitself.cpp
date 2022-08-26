#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sortarray(int a[],int n,int b[],int m)
{
  int i=n-1;
  int j=m-1;
  int k=m+n-1;

  for(;i>=0 and j>=0 and k>=0;)
  {
    if(a[i]>b[j])
    {
      a[k]=a[i];
    
    i--;k--;
    }
    else 
    {
      a[k]=b[j];
       j--;k--;
   }
   
}

  while(i>=0)
  {
  a[k]=a[i];
  k--;i--;
  }
  while(j>=0)
  {
  a[k]=b[j];
  k--;j--;
  }
}

int main(){
  int a[]={1,3,4,6,7,9,0,0,0,0,0,0};
  int n=6;
  int b[]={2,3,5,8,9,20};
  int m=sizeof(b)/sizeof(int);
  sortarray(a,n,b,m);
  for(int i=0;i<12;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
