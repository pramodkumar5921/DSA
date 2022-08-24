#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkprime(int no)
{
    for(int i=2;i<no;)
    {
        if(no%i==0){
            return false;
        }
        i=i+1;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    bool ans=checkprime(n);
    if (ans==true){
        cout<<"yes"<<endl;
    }
    else {
            cout<<"No";
        }
    
    return 0;
}
