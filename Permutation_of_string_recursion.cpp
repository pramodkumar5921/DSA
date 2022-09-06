// Permutation.cpp
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permutations(char*a,int i){
    // basecase
    if(a[i]=='\0'){
        cout<<a<<endl;
        return;
    }
    for(int j=i;a[j]!='\0';j++){
        swap(a[i],a[j]);
        permutations(a,i+1);
        swap(a[i],a[j]);
    }
}
int main(){
    char a[] = "abc";
    permutations(a,0);
    return 0;
}
