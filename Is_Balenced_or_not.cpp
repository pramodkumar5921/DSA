#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// stack<char>ch;
bool isbalanced(char*a){
    stack<char>s;
    for(int i=0;a[i]!='\0';i++){
        char ch=a[i];
        switch (ch)
        {
            case '(':
            case '{':
            case '[':
            s.push(ch);
            break;
            case ')':
            if(!s.empty() and s.top()=='('){
                    s.pop();
            }
            else{
               return false; 
            }
            break;
            case '}':
            if(!s.empty() and s.top()=='{'){
                    s.pop();
            }
            else{
               return false; 
            }
            break;
            case ']':
            if(!s.empty() and s.top()=='['){
                    s.pop();
            }
            else{
               return false; 
            }
            break;
        }
    }
    if(s.empty()){
        return true;
    }
    return false;
}
int main(){
    char a[]="{a+[b+c]*e(f+d)}";
    if(isbalanced(a)){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"not balanced"<<endl;
    }
    return 0;
}
