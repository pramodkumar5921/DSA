
Anas Karatela
1 year ago
#include<iostream>
using namespace std;
 class node{
     public:
     int data;
     node*next;
     node(int val){
         data=val;
         next=NULL;
     }
 };
  class queue{
      node*front;
      node*back;
      public:
      queue(){
          front=NULL;
          back=NULL;
      }

       void push(int x){
           node*n=new node(x);
           if(front==NULL){
               back=n;
               front=n;
               return;
           }
            back->next=n;
            n=back;

       }
       void pop(){
           if(front==NULL){
               cout<<"No elements"<<endl;
               return;
           }
            node* todelete=front;
           front=front->next;
           delete todelete;
       }
        int peek(){
            if(front==NULL){
                cout<<"No element"<<endl;
                return -1;
            }
             return front->data;
        }
        bool empty(){
            if(front==NULL){
                return true;
            }
            return false;
        }
