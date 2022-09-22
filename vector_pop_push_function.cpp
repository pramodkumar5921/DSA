#include<iostream>
// #include<bits/stdc++.h>
using namespace std;
// Vector<int>v;
class vector{
    public:
    int *arr;
    int cs;
    int ms;
    // constructor
    vector(int s=2){
        cs=0;
        ms=s;
        arr = new int[ms];
    }

    void push_back(int data){
        if(cs==ms){
            int *oldarr = arr;
            int oldms = ms;
            arr = new int[2*ms];
            ms=2*ms;

            for(int i=0;i<oldms;i++){
                arr[i]=oldarr[i];
            }
            delete [] oldarr ;
        }
        arr[cs]=data;
        cs++;
    }

    // pop_back
    void pop_back(){
        if(cs>0){
            cs--;
    }
 }
 // size of vector 
    int size(){
        return cs;
    }
// capacity of vector 
    int capacity(){
        return ms;
    }
// v[i] - operator overloading : []
    int operator[](int i){
        return arr[i];
    }

};   
int main(){

    vector v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;
    return 0;
}
