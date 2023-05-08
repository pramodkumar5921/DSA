#include <iostream>

using namespace std;

struct Stack{

    int *arr;

    int size;

    int capacity;

    int top;

    

    Stack(int n){

        capacity=n;

        top=0;

        size=0;

        arr=new int;

    }

    

    void topelement(){

        if(size==0){

            cout<<"Stack empty"<<endl;

            return;

        }

        cout<<"Top element "<<arr[0]<<endl;

    }

    

    void pop(){

        if(size==0){

            cout<<"Stack empty"<<endl;

            return;

        }

        cout<<"Pop element "<<arr[0]<<endl;

        for(int i=0;i<size-1;i++){

            arr[i]=arr[i+1];

        }

        size--;

    }

    void display(){

        if(size==0){

            cout<<"Stack empty"<<endl;

            return;

        }

        cout<<"[";

        for(int i=0;i<size-1;i++){

            cout<<arr[i]<<",";

        }

        cout<<arr[size-1]<<"]"<<endl;

    }

    

    void push(int data){

        if(size==capacity){

            cout<<"Stack full"<<endl;

            return;

        }

        for(int i=size;i>0;i--){

            arr[i]=arr[i-1];

        }

        arr[0]=data;

        size++;

        return;

    }

};

int main()

{

    cout<<"Enter capacity of stack"<<endl;

    int n;

    cin>>n;

    Stack stack(n);

    cout<<"Enter number of elements"<<endl;

    cin>>n;

    for(int i=0;i<n;i++){

        cout<<"Enter value "<<i+1<<" ";

        int x;

        cin>>x;

        stack.push(x);

    }

    stack.topelement();

    stack.display();

    cout<<"Enter number of pop operations ";

    cin>>n;

    for(int i=0;i<n;i++){

        stack.pop();

    }

    stack.topelement();

    stack.display();

    return 0;

}
