#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int s[]={7,1,5,3,6,8,2};
    int n=sizeof(s)/sizeof(int);
    int minprice=INT_MAX;
    int profit=0;
    for(int d=0;d<n;d++)
    {
        if(s[d]<minprice)
        {
            minprice=s[d];
        }
    
        else{
            profit = max(profit,s[d]-minprice);
        }
}
        cout<<profit<<endl;
    
    return 0;
}
