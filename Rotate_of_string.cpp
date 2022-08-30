#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int length(char*a){
    int i;
    for(i=0;a[i]!='\0';i++){

    }
    return i;
}
int main(){
    int n=7;
    char a[100]="coding";
    int len=length(a);
    n=n%len;
    int i=len-1;
    while(i>=0){
        a[n+i]=a[i];
        i--;
    }
    //cout<<a<<endl;
    // bring n characters from end to the front
    i=len;
    int j=0;
    for(int k=0;k<n;k++){
        a[j]=a[i];
        i++;j++;
    }
    //cout<<a<<endl;
    // Add null at the lena position
    a[len]='\0';
    cout<<a<<endl;
    return 0;
}
