#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int length(char*a){
    int i;
    for(i=0;a[i]!=0;i++){

    }
    return i;
}
void copy(char*a,char*b){
    int i=0,j=0;
    int lenb=length(b);
    while(j<=lenb){
        a[i]=b[j];
        i++;j++;
    }
}
int main(){
    char largest[100];
    int largest_len=0;
    int n;
    char a[100];
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        cin.getline(a,100);
        int len=length(a);

        if(largest_len<len){
            copy(largest,a);
            largest_len=len;
        }
    }
    cout<<"largest string :"<<largest<<endl;
    cout<<"largest string length :"<<largest_len<<endl;
    return 0;
}
