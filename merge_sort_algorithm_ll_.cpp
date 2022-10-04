#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int d){
        data = d;
        next = NULL;
    }
};
int lengthll(node*head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
void insertatend(node*&head,node*&tail,int d){
    node*n=new node(d);
    if(head==NULL){
        head=tail=n;
     }
     else{
        tail->next=n;
        tail=n;
    }
}
node* merge(node*h1,node*h2){
    // base case
    if(h1==NULL){
        return h2;
    }
    if(h2==NULL){
        return h1;
    }
    // recursive case
    node*nh=NULL;
    if(h1->data<h2->data){
        nh=h1;
        nh->next=merge(h1->next,h2);
    }
    else{
        nh=h2;
        nh->next=merge(h1,h2->next);
    }
    return nh;
}
node*mid(node*head){
    if(head==NULL){
        return NULL;
    }
    node*s=head;
    node*f=head->next;
    while(f!=NULL and f->next!=NULL){
        f=f->next->next;
        s=s->next;
    }
    return s;
}
void printll(node*head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
node* mergesort(node*head){
    // basecase
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    // 1.Divide
    node*m=mid(head);
    node*a=head;
    node*b=m->next;
    m->next=NULL;
    // 2.sort
    a=mergesort(a);
    b=mergesort(b);
    // 3.merge 
    node*newhead=merge(a,b);
    return newhead;
}
int main(){
    node*head,*tail,*h1,*t1;
    head=tail=h1=t1=NULL;
    // int d;
    // lengthll(head);
    // insertatend(head,tail,1);   
    // insertatend(head,tail,4);    
    // insertatend(head,tail,7);    
    // insertatend(head,tail,8);    
    // insertatend(head,tail,9);    
    // insertatend(head,tail,89);    
    // insertatend(head,tail,98);
    // insertatend(h1,t1,1);
    // insertatend(h1,t1,2);
    // insertatend(h1,t1,13);
    // insertatend(h1,t1,45);
    // insertatend(h1,t1,79);
    // printll(head);
    // printll(h1);
    // node*newhead = merge(head,h1);
    // printll(newhead);
    insertatend(head,tail,4);
    insertatend(head,tail,2);
    insertatend(head,tail,56);
    insertatend(head,tail,3);
    insertatend(head,tail,6);
    insertatend(head,tail,89);
    insertatend(head,tail,45); 
    printll(head);
    head=mergesort(head);
    printll(head);   
    return 0;
}
