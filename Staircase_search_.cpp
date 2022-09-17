#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[][4]={
        {1,2,5,8},
        {4,9,12,13},
        {6,10,14,16},
        {7,11,15,17}
    };
    int n=4,m=4;
    int i=0,j=m-1;
    int key=20;
    bool iskeyfound=false;
    while(i<n and j>=0){
        if(a[i][j]==key){
            iskeyfound=true;
            cout<<" key found at "<<i<<" ,"<<j<<endl;
            break;
        }
        else if(a[i][j]<key){
            i++;
        }
        else{
            j--;
        }
    }
    if(iskeyfound==false){
        cout<<"key not found "<<endl;
    }
    return 0;
}
