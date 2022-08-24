#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int no)
{
    int ans=1;
    for(int i=1;i<=no;)
    {
        ans=ans*i;
        i=i+1;
    }
    return ans;
}
int ncr(int n,int r)
{
    int temp=factorial(n)/(factorial(r)*factorial(n-r));
    return temp;
}
    int main(){
        int n,r;
        cin>>n>>r;
        int temp=ncr(n,r);
        cout<<temp;
    // int ans=factorial(n);
   // cout<<factorial(n);
    return 0;
}
