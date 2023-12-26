#include<bits/stdc++.h>
using namespace std;
string winnerOfCandies(int x, int y){
   for(int i=1;i<=1e7;i++){
       if(i%2!=0){
           x=x-i;
           y=y+i;
           if(x<0){
               return "Lose";
           }
       }
       else{
           y=y-i;
           x=x+i;
            if(y<0){
                return "Win";
            }
       }
   }
   return "";
}
