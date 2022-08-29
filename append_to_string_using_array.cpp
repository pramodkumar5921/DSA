#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int length(char a[]){
    int i;
    for(i=0;a[i]!='\0';i++){

    }
    return i;
}
 void append(char a[],char b[]){
    int i=length(a);
    int j=0;
    int k=0;
    int lenb=length(b);
    while(j<=lenb){
        a[i+k]=b[j];
        j++;k++;
    }
 }
int main(){
    char a[100],b[100];
    cin>>a>>b;
    cout<<a<<endl;
    append(a,b);
    cout<<a<<endl;
    return 0;
}
