#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class complexnumber{
private:
int real,imag;
public:
complexnumber(int r=0,int i=0){
    real=r;
    imag=i;
}
complexnumber operator + (complexnumber const &obj){
    complexnumber res;
    res.real=real+obj.real;
    res.imag=imag+obj.imag;
    return res;
}
void print(){
    cout<<real<<"+i"<<imag<<'\n';
}
};

int main(){
    complexnumber c1(2,3),c2(4,5);
    complexnumber c3=c1+c2;
    c3.print();
    return 0;
}
