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
    printll(head);
    return 0;
}
