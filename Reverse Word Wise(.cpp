#include<bits/stdc++.h>
using namespace std;
void reverseStringWordWise(char input[]) {
    int i=0;
    int j=strlen(input)-1;
   while(i<j){
       swap(input[i],input[j]);
       i++;j--;
   }
//    return;
   int k=strlen(input);
   int n=0;
   for(int i=0;i<k;){
       if(input[i]!=' '){
           i++;
       }
        if(input[i]==' ' or i==k ){
           int m=i-1;
           while(n<m){
               swap(input[m],input[n]);
               n++;m--;
           }
           i++;
           n=i;
       }
   }
   return;
}
