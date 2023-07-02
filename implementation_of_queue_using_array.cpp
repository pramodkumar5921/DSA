#include<bits/stdc++.h>
using namespace std;
int rare=-1,front=-1;
int arr[100];
int n=100;
void enque(int val){
    if(rare==n-1){
        cout<<"queue is overflow"<<endl;
        return;
    }
    else if(front==-1 and rare==-1){
        front++;
        rare++;
    }
    arr[rare]=val;
    rare++;
}
void del(){
    if(front==rare or rare==-1){
        cout<<"queue is empty"<<endl;
        return;
    }
    else{
        cout<<"deleted elemnt is -> "<<arr[front]<<endl;
    }
    front++;
}
void display(){
    if(rare==-1 or front==rare){
        cout<<"queue is empty ->"<<endl;
        return ;
    }
    // int m=sizeof(arr)/sizeof(int);
    for(int i=0;i<rare;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int ch,val;
    do{
        cout<<"enter the choice ->"<<endl;
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"enter the val->"<<endl;
                cin>>val;
                enque(val);
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
            default:{
                cout<<"invalid choice"<<endl;
                break;
            }
        }
    }while(ch!=45);
    return 0;
}
