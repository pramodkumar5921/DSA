//  aim=3*2=5;
#include<bits/stdc++.h>
using namespace std;
class fun
{
private:
    int data;
public:
fun(int i=1){
    data = i;
}
fun operator *(fun const&obj ){
    fun res;
    res.data=data+obj.data;
    
    return res;
}
 void print(){
    cout<<data<<endl;
 }   
};
int main(){
    fun n1(3),n2(5);
    fun n3=n1*n2;
    n1.print();
    n2.print();
    n3.print();
    return 0;
}
