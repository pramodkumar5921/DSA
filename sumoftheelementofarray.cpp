#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans+a[i];
    }
    return ans;
}

int main(){
    int a[]={1,2,3,5,6,8,9};
    int n=sizeof(a)/sizeof(int);
    int ans=sum(a,n);
    cout<<"The Of Elements OF Array=>"<<ans;
    return 0;
}
