#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class fraction1{
private:
int num;
int demo;
public:
// parametrisited constror;
void simplify(){
    int upper=num;
    int lower=demo;
    int hcf=__gcd(upper,lower);
    num=num/hcf;
    demo=demo/hcf;
    
}
fraction1(int n,int d){
    num=n;
    demo=d;
}
fraction1 operator + (fraction1 const &obj){
    int lcm=demo*(obj.demo);
    int x=lcm/demo;
    int y=lcm/obj.demo;
    
    int cnt=x*(num)+y*(obj.num);
    fraction1 res(cnt,lcm);
    
    return res;
}
void print(){
    cout<<num<<"/"<<demo;
}
};
int main(){
    fraction1 f1(10,2),f2(5,4);
    fraction1 f3=f1+f2;
    f3.print();
    cout<<endl;
    f1.print();
    cout<<endl;
    f2.print();
    cout<<endl;
    f3.simplify();
    f3.print();
    return 0;
}
