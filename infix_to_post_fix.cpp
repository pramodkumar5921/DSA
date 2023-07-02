#include<bits/stdc++.h>
using namespace std;
int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    return -1;
}
string convert(string infix){
    stack<int>st;
    int n=infix.size();
    string res;
    for(int i=0;i<n;i++){
        if(infix[i]>='a' and infix[i]<='z' || infix[i]>='A' and infix[i]<='A' ){
            res+=infix[i];
        }
        else if(infix[i]=='('){
            st.push(infix[i]);
        }
        else if(infix[i]==')'){
            while(st.size()>0 and st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(st.size()>0){
                st.pop();
            }
            
        }
        else{
            while(st.size()>0 and prec(st.top())>=prec(infix[i])){
                res+=st.top();
                st.pop();
            }
            st.push(infix[i]);
        }
    }
    return res;
}
int main(){
    string infix;
    cin>>infix;
    string postfix=convert(infix);
    cout<<postfix<<endl;
    return 0;
}
