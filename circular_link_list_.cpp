#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
  public:
    int data;
    node* next;

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
void insertatfront(node* &head ,int d){
    node* n = new node(d);
    if(head == NULL){
        head =  n;
        // n refers to the new node 
    }
    else{
        n->next = head;
        head = n;
    }
}
node* mid(node*head){
    if(head==NULL){
        return NULL;
    }
    node*s = head;
    node*f = head->next;
    while(f!=NULL and f->next!=NULL){
        f=f->next->next;
        s=s->next;
    }
    return s;
}
void printll(node*head){
    while(head != NULL){
        cout<<head->data<<"-->";
        head = head->next;
        // head ka next means the addrass of next node
    }
    cout<<"NULL"<<endl;
}
void createcycle(node*head){
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head->next->next;
}
void breakthecycle(node*fast,node*head){
    
    node*prev=head;
    // 1. set the prev behind fast;
    while(prev->next!=fast){
        prev=prev->next;
    }
    //2.Break the cycle
    node*slow=head;
    while(fast!=slow){
    prev=fast;
    fast=fast->next;
    slow=slow->next;
    }
    prev->next=NULL;

}
bool iscyclic(node*head){
    node*slow = head,*fast=head;
    while(fast!=NULL and fast->next!=head){
        fast=fast->next->next;
        slow=slow->next;
        if(fast == slow){
            breakthecycle(fast,head);
            return true;
        }
    }
    return false;
}
int main(){
node* head,*h1,*t1;
head =h1=t1=NULL;
// int n;cin>>n;
insertatfront(head,2);
insertatfront(head,3);    
insertatfront(head,4);
insertatfront(head,5);
insertatfront(head,0);
insertatfront(head,78);
insertatfront(head,54);
insertatfront(head,45);
// printll(head);
// head = mergesort(head);
createcycle(head);
// printll(head);  
if(iscyclic(head)==true){
    cout<<"cycle is present"<<endl;
}
else{
    cout<<"cycle is not present";
}
printll(head);
return 0;
}
