#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
struct Node{
    int data;
    Node*next;
};
Node*head=NULL ,*tail=NULL;
void insert(int val){
    Node*temp=new Node;
    mp[val]++;
    temp->data=val;
    if(head==NULL){
        head=tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
void display(){
    Node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"-->"<<" ";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}
void removethedulipcate(){
    Node* curr=head;
    while(curr!=NULL){
        int ele=curr->data;
        if(mp[ele]==1){
            cout<<curr->data<<"-->"<<" ";
        }
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    int ch,val;
    do{
        cout<<"enter the choice -->"<<endl;
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"enter the element "<<endl;
                cin>>val;
                insert(val);
                break;
            }
            case 2:{
                display();
                break;
            }
            case 3:{
                removethedulipcate();
                break;
            }
            default:{
                cout<<" enter the invalid choice "<<endl;
                break;
            }
        }
    }while(ch!=45);
    return 0;
}
