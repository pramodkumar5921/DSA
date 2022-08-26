#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Array_1(int arr1[1000],int n1,int arr2[1000],int n2,int arr3[100000])
{ 
    int i = 0, j = 0, k = 0;
 
    
    while (i<n1 && j <n2)
    {
      
        if (arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++; i++;
        }
            
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
            
    }
 
    // Store remaining elements of first array
    while (i < n1){
        arr3[k] = arr1[i];
        i++;k++;
    }
       
 
    // Store remaining elements of second array
    while (j < n2){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
        
}

int main(){
    int a[]={2,4,5,7,9};
    int b[]={1,2,3,5,6,7};
    int c[100000]={0};
    int n = sizeof(a)/sizeof(int);
    int m=sizeof( b)/sizeof(int);
     for(int i=0;i<(m+n);i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

    Array_1(a,n,b,m,c);

    for(int i=0;i<(m+n);i++){
        cout<<c[i]<<" ";
    }
    return 0;
}
