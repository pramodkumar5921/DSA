#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// jis class ke andar ussi ka pointer hota hai
// we call that class as self.reference .class

class node{
 public:
    int data;
    node*next;

    node(int d){// constructor  
        data = d;
        next = NULL;
    }
};
int main(){
    node a(1);
    // a.data=1;
    // a.next=NULL;
    node b(2);
    node c(3);

    // to link the node 
    a.next=&b;
    b.next=&c;

    cout<<a.data<<endl;
    cout<<a.next->data<<endl;
    cout<<a.next->next->data<<" ";
    
    return 0;
}
