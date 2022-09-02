#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void  index_no(int a[],int n,int i){
    //  basecase
    if(i==n){
        return;
    }



    // recursive case
    if(a[i]==4){
        cout<<i<<" ";
    }
    index_no(a,n,i+1);
    return ;

}

int main(){
    int a[]={2,4,5,7,4,3,4,0};
    int n=sizeof(a)/sizeof(int);
    index_no(a,n,0);

    return 0;
}
