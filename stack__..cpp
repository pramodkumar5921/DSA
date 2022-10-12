#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int d): data(d),next(NULL){}
};
class stack{
    private:
    node*head;
    public:
    stack(){
        head=NULL;
    }
    void push(int d){
        // insert at front
        node*n=new node(d);
        if(head==NULL){
            head=n;
        }
        else{
            n->next=head;
            head=n;
        }
    }
    void pop(){
        // insert at end
        if(head==NULL){
            delete head;
            head=NULL;
        }
        else{
            node*temp=head;
            head=head->next;
            delete temp;
        }
    }
    bool empty(){
        // head==NULL
        if(head==NULL){
            return head;
        }

    }
    int top(){
        // Data at head
        return head->data;
        }
};
int main(){
   stack st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(6);
   while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
   } 
    return 0;
}#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int d): data(d),next(NULL){}
};
class stack{
    private:
    node*head;
    public:
    stack(){
        head=NULL;
    }
    void push(int d){
        // insert at front
        node*n=new node(d);
        if(head==NULL){
            head=n;
        }
        else{
            n->next=head;
            head=n;
        }
    }
    void pop(){
        // insert at end
        if(head==NULL){
            delete head;
            head=NULL;
        }
        else{
            node*temp=head;
            head=head->next;
            delete temp;
        }
    }
    bool empty(){
        // head==NULL
        if(head==NULL){
            return head;
        }

    }
    int top(){
        // Data at head
        return head->data;
        }
};
int main(){
   stack st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(6);
   while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
   } 
    return 0;
}
