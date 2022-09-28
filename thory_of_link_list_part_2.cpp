#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
  public:
    int   data;
    node*   next;

    node(int d){
        data = d;
        next = NULL;
    }
};
int lengthll(node*head){
    int count =0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
void insertatend(node* &head,node* &tail,int d){
    node*n=new node(d);
    if(head == NULL){
        head = tail =n;
    }
    else{
        tail->next=n;
        tail = n;
    }
}
void insertatfront(node* &head , node* &tail,int d){
    node* n = new node(d);
    if(head == NULL){
        head = tail = n;
        // n refers to the new node 
    }
    else{
        n->next = head;
        head = n;
    }
}
 
void insertatmid(node*&head,node *&tail,int pos,int data){
    if(pos==0){
       insertatfront(head,tail,data); 
    }
    else if(pos >= lengthll(head)){
        insertatend(head,tail,data);
    }
    else{
        int i=1;
        node* t = head;
        while(i<=pos-1){
            t = t->next;
            i++;
        }
        node* n = new node(data);
        n->next = t->next;
        t->next=n;
    }
}
void printll(node*head){
    while(head != NULL){
        cout<<head->data<<"-->";
        head = head->next;
        // head ka next means the addrass of next node
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head,*tail;
    head = tail = NULL;
    insertatfront(head,tail,1);
    insertatfront(head,tail,2);
    insertatfront(head,tail,3);
    insertatfront(head,tail,4);
    insertatfront(head,tail,5);
    insertatfront(head,tail,6);
    // insertatend(head,tail,1);
    // insertatend(head,tail,2);
    // insertatend(head,tail,3);
    // insertatend(head,tail,4);
    // insertatend(head,tail,5);
    // insertatend(head,tail,6);
    insertatmid(head,tail,3,0);
    
    printll(head);
    return 0;
}
