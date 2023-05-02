#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class multiple{
private:
int num;
int demo;
public:
// parametrized constructor
multiple (int n,int d){
num=n;
demo=d;
}
multiple operator * (multiple const &obj){
    int upper=num*obj.num;
    int lower=demo*(obj.demo);
    multiple res(upper, lower);
    return res;
}
void print(){
    cout<<num<<"/"<<demo;
}
};
int main(){
    multiple f1(2,1),f2(6,1);
    multiple f3=f1*f2;
    f3.print();
    return 0;
}
