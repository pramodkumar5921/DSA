#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[1000];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int b=0;
   bool isToochaotic = false;
    for(int i=n;i>=1;i--)
    {
        if(i!=a[i]){


            
            if(i==a[i-1]){
        swap(a[i],a[i-1]);
            b+=1;
            }
           
        else if(i==a[i-2]){
            
            swap(a[i-1],a[i-2]);
            swap(a[i-1],a[i]);
            b+=2;
        }
        else{
            cout<<"To Chaotic"<<endl;
            isToochaotic = true;
            break;
           } 
        }   
        
    }
    if(isToochaotic==false){
        cout<<b<<" ";
        
    }
    
  
    return 0;
}

