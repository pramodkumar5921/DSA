#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int length(char *a){
    int i;
    for(int i=0;a[i]!=0;i++){

    }
    return i;
}
void reverse(char *a){
    int len=length(a);
    int i=0;
    int j;
    int ans;
    for(j=len-1;j>=0;j--){
        cout<<a[j];
    }
}
int main(){
    char a[100]="madam";
    reverse(a);
    return 0;
}
