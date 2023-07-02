#include<bits/stdc++.h>
using namespace std;
struct Node{
     int data;
     int priority;
     Node*next;
};
Node*front=NULL;
void insert(int val,int priority){
    Node*temp=NULL;
    Node*curr,*prev=NULL;
    temp=new Node;
    temp->data=val;
    temp->priority=priority;
    if(front==NULL or priority>=front->priority){
        temp->next=front;
        front=temp;
    }
    else{
        curr=front;
        while(curr!=NULL and curr->priority>=priority){
            prev=curr->next;
        }
        temp->next=prev->next;
        prev->next=temp;
    }
}
void del(){
    if(front==NULL){
        cout<<"under flow"<<endl;
    }
    Node*ptr=front;
    cout<<"deleted elment->"<<ptr->data<<endl;
    front=ptr->next;
    free(ptr);
}
void display(){
    if(front==NULL){
        cout<<"queue is empty"<<endl;
    }
    Node*curr=front;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
void peek(){
    cout<<front->data<<endl;
}
int main(){
    int ch,val,priority;
     do{
        cout<<"enter the choice "<<endl;
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"enter the value "<<endl;
                cin>>val;
                cout<<"its priority "<<endl;
                cin>>priority;
                insert(val,priority);
                break;
            }
            case 2:{
                del();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                peek();
                break;
            }
            default:{
                cout<<"enter the invalid "<<endl;
                break;
            }
        }
     }while(ch!=45);
    return 0;
}
