#include<bits/stdc++.h>
using namespace std;
int arr[100];
int n=100;
int top=-1;
void push(int num){
    if(n-1==top){
        cout<<"overflow"<<endl;
    }
    top++;
    arr[top]=num;
}
void pop(){
    if(top==-1){
        cout<<"underflow"<<endl;
        return;
    }
    top--;
}
bool empty(){
    return top==-1;
}
int Top(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    return arr[top];
}
void display(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
        return ;
    }
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
      cout<<"1) push into the stack "<<endl;
      cout<<"2) pop from stack "<<endl;
      cout<<"3) to check stack is empty or not "<<endl;
      cout<<"4) top element val from stack "<<endl;
      cout<<"5) display the element from stack "<<endl;
      int ch,val;
      do{
        cout<<"enter the choice "<<endl;
        cin>>ch;
        switch (ch){
        case 1:{
            cout<<"enter the elemnt "<<endl;
            cin>>val;
            push(val);
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            cout<<empty()<<endl;
            break;
        }
        case 4:{
            cout<<Top()<<endl;
            break;
        }
        case 5:{
            display();
            break;
        }
        case 6:{
            cout<<"Exit "<<endl;
            break;
        }
        default:
        cout<<"INVALID enter"<<endl;
            break;
        }
      }while(ch!=45);
    return 0;
}
