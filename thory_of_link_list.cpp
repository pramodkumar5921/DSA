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
void deleteatfront(node*&head,node*&tail){
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    else{
        node*temp=head;
        head = head->next;
        delete temp;
    }
}
void deleteatend(node*&head,node*&tail){
    if(head==NULL){
        return ;
    }
    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    else{
    node*t=head;
    while(t->next!=tail){
        t=t->next;
    }
    delete tail;
    tail=t;
    t->next=NULL;
}
}
void deleteatmid(node*&head,node*&tail,int pos){
    if(pos==0){
        deleteatfront(head,tail);
    }
    else if(pos<lengthll(head)){
        node*temp = head;
        for(int i=1;i<pos;i++){
            temp=temp->next;
        }
        node*n = temp->next;
        temp->next=n->next;
        delete n;
    }
}
void searchll(node*head,int key){
    // node*temp=head;
    bool isfound = false;
    while(head!=NULL){ // time complextiy is(0(N))
        if(head->data==key){
            cout<<"found"<<endl;
            isfound=true;
            return;
        }
        head=head->next;
    }
    if(isfound==false){
        cout<<"not found"<<endl;
        return;
    }
}
void searchllrec(node*head,int key){
    // base case
    if(head==NULL){
        cout<<"NOT FOUND"<<endl;
        return;
    }
    // recursive case
    if(head->data==key){
        cout<<"FOUND"<<endl;
        // searchllrec(head->next,key);
    }
    else{
        searchllrec(head->next,key);
    }
}
void reversell(node*&head,node*&tail){
    node*c=head; // current pointer
    node*p=NULL,*n;//
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    swap(head,tail); // the value of head and tail are changed here
    // tail=head;
    // head=p;

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
    // insertatfront(head,tail,1);
    // insertatfront(head,tail,2);
    // insertatfront(head,tail,3);
    // insertatfront(head,tail,4);
    // insertatfront(head,tail,5);
    // insertatfront(head,tail,6);
    insertatend(head,tail,1);
    insertatend(head,tail,2);
    insertatend(head,tail,3);
    insertatend(head,tail,4);
    insertatend(head,tail,5);
    insertatend(head,tail,6);
    printll(head);
    // deleteatfront(head,tail);
    //insertatmid(head,tail,3,0);
    // deleteatend(head,tail);
    int key;
    // cin>>key;
    // deleteatmid(head,tail,45);
    // searchll(head,key);
    // searchllrec(head,key);
    reversell(head,tail);
    printll(head);
    return 0;
}
