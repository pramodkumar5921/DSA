#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    float n;
    cin>>n;
    float i=0;
    while(i*i<=n)
    {
        if(i*i==n)
        {
            cout<<i<<endl;
        }
        
        i++;
        
    }
        i--;
        while(i*i<=n)
        {
            i=i+0.001;
        }
        i=i-0.001;
        cout<<i<<endl;
        return 0;
}
