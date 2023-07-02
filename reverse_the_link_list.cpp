#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
};
Node*head=NULL,*tail=NULL;
void insert(int val){
    Node*temp=new Node;
    temp->data=val;
    if(head==NULL){
        head=tail=temp;
    }
    else{
    tail->next=temp;
    tail=temp;
    }
}
void reverse(){
Node*curr=head;
Node*prev=NULL,*n;
while(curr!=NULL){
    n=curr->next;
    curr->next=prev;
    prev=curr;
    curr=n;
}
swap(head,tail);
Node*temp=head;
while(temp!=NULL){
    cout<<temp->data<<"-->"<<" ";
    temp=temp->next;
}
cout<<"NULL";
cout<<endl;
}
void display(){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"-->"<<" ";
        curr=curr->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main(){
    int ch,val;
    do{
        cout<<"enter the choice ->"<<endl;
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"enter the elemnt->"<<endl;
                    cin>>val;
                    insert(val);
                    break;
            }
            case 2:{
                display();
                break;
            }
            case 3:{
                reverse();
                break;
            }
            default:{
                cout<<"choice is invalid->"<<endl;
                break;
            }
        }
    }while(ch!=45);
    return 0;
}
