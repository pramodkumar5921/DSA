#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int>&s,int topele){
    // base case
    if(s.empty()){
        s.push(topele);
        return;
    }
    // recursive case
    int top=s.top();
    s.pop();
    insertatbottom(s,topele);
    s.push(top);

}
void stackreverse(stack<int>&s){
    // base case
    if(s.empty()){
        return;
    }
    // reciursive case
    int topele=s.top();
    s.pop();
    stackreverse(s);
    insertatbottom(s,topele);
}
void printstack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
printstack(s);
    cout<<endl;
stackreverse(s);
printstack(s);    
    return 0;
}
