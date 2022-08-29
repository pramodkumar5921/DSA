#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void readstring(char a[]){
    char ch;
    ch=cin.get();
    int i=0;
    while(ch!='\n'){
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';
    return;
}

int main(){
    char a[100];
    readstring(a);
    for(int i=0;a[i]!='\0';i++){
        cout<<a[i];
    }
    return 0;
}
