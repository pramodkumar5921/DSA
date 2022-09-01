#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char arr[][10]={
    "zero","one","two","three","four","five","six","seven","eight","nine","ten"
};
void intgertostring(int no){
    // basecase
    if(no==0){
        return;
    }
    // recursive case
    int digit = no%10;
    intgertostring(no/10);
    cout<<arr[digit]<<" ";
}

int main(){
    intgertostring(23456789);
    return 0;
}
