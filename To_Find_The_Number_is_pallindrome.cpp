#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int length(char *a){
    int i;
    for(i=0;a[i]!='\0';i++){
        
    }
    return i;
}
bool ispallindrome(char *a){
    int i=0;
    int len = length(a);
    int j=len-1;

    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}
int main(){
    char a[100];
    cin>>a;
    if(ispallindrome(a)){
        cout<<"pallindrome"<<endl;
    }
    else{
        cout<<"Not a pallindrome"<<endl;
    }
    return 0;
}
