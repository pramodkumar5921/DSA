#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[] = {1,4,5,8,9,10};
    int n = sizeof(a)/sizeof(int);
    printarray(a,n);
    int key;
    cin>>key;
    int s=0,e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if (a[mid]==key){
            cout<<"Element found at "<<mid<<endl;
            break;
        }
        else if(a[mid]<key){
            s = mid+1;
        }
        else{
            e = mid-1;
        } 
    }
    if(s>e)
    {
        cout<<"Key Nahi milli"<<endl;
    }
    return 0;
}
