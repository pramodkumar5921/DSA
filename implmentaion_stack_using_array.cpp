#include<bits/stdc++.h>
using namespace std;

class mystack
{
int* ptr;
int max_capacity;
int arr_size;

public:

mystack(int g)
{
ptr = new int[g];
max_capacity=g;
arr_size=0;
}

void push(int g)
{
if(arr_size==max_capacity)
{
    cout<<"Cannot Push! Stack is full"<<endl;
    return;
}

ptr[arr_size]=g;
cout<<"Element "<<g<<" pushed in stack!"<<endl;
arr_size++;
}

void pop()
{
    if(arr_size==0)
    {
        cout<<"Cannot Pop! Stack is Empty"<<endl;
        return;
    }

    cout<<"Element Popped!"<<endl;
    arr_size--;
}

int top()
{
    if(arr_size==0)
    {
        cout<<"Cannot give the top element! Stack is empty"<<endl;
        return -1;
    }

    cout<<"Top element is: "<<ptr[arr_size-1]<<endl;
    return ptr[arr_size-1];
}

int size()
{
    return arr_size;
}

int empty()
{
    if(arr_size==0)
    {
        cout<<"Stack is Empty!"<<endl;
        return 1;
    }

    cout<<"Stack is not Empty!"<<endl;
    return 0;
}

};

int main()
{
mystack s1(7);

s1.empty();

s1.push(9);

s1.push(7);

s1.pop();

s1.size();

s1.top();

s1.empty();

}
