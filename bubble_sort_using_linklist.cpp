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
        node*n = new node(d);
        if(head==NULL){
            head=tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
}
void bubblesort(node*&head){
    for(int i=0;i<lengthll(head)-1;i++){
        node*c=head;
        node*p=NULL;
        while(c!=NULL and c->next!=NULL){
            node*n=c->next;
            if(c->data>n->data){
                if(p==NULL){
                    c->next=n->next;
                    n->next=c;
                    p=head=n;
                }
                else{
                    p->next=c->next;
                    c->next=n->next;
                    n->next=c;
                    p=n;
                }

            }
            else{
                // swaping nahi hogi
                p=c;
                c=n;
            }
        }
    }
}
void printll(node*head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node*head,*tail;
    head=tail=NULL;
    insertatend(head,tail,1);
    insertatend(head,tail,2);
    insertatend(head,tail,73);
    insertatend(head,tail,5);
    insertatend(head,tail,6);
    insertatend(head,tail,7);
    insertatend(head,tail,78);
    printll(head);
    bubblesort(head);
    printll(head);
    return 0;
}
