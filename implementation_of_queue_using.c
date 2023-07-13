#include<stdio.h>
#include<stdlib.h>
# define size 100
int queue[100];
int front=-1;
int rare=-1;
int isfull(){
    if(rare==size-1){
        return 1;
    }
    return 0;
}
int isempty(){
    if(front==-1 || front>rare){
        return 1;
    }
    return 0;
}
void enqueue(int data){
    if(isfull()){
        printf("queue is full\n");
        return;
    }
    else{
        if(front==-1){
            front++;
        }
    }
    rare++;
    queue[rare]=data;
    printf("%d enqueued successfully.\n",data);
}
void dequeue(){
    if(isempty()){
        printf("under flow\n");
        return;
    }
    else{
        printf("%d deque successfully \n",queue[front]);
        front++;
    }
    return;
}
void display(){
    if(isempty()){
        printf("queue is empty\n");
        return;
    }
    for(int i=front;i<=rare;i++){
        printf("%d\t",queue[i]);
    }
    printf("\n");
}
int main(){
    int ch,val;
    do{
        printf("enter the choice :\n");
        scanf("%d",&ch);
       switch(ch){
           case 1:{
               printf("enter the val \n");
               scanf("%d",&val);
               enqueue(val);
               break;
           }
           case 2:{
               dequeue();
               break;
           }
           case 3:{
               display();
               break;
           }
           default:{
               printf("enter the incorrect input\n");
               break;
           }
       } 
    }while(ch!=45);
    return 0;
}
