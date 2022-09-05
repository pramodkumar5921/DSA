#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subsequences(char *in,char *out,int i,int j){
      if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
      }  
    
    // basecase

    // recursive case
    // 1. ignore the i th character
    subsequences(in ,out, i+1,j);
    //2.consider the i th character 
    out[j]=in[i];
    subsequences(in,out,i+1,j+1);
}
int main(){
    char in[]="abc";
    char out[100];
    subsequences(in,out,0,0);
    return 0;
}
