#include<iostream>
#include<bits/stdc++.h>
using namespace std;
ostream& operator<<(ostream& os,list<int> &l){
    for(auto x : l){
// x gives the value of element 
        cout<<x<<"-->";
}
    cout<<"NULL"<<endl;
    return os;
}
int main(){
    // creating a linked list
    list<int>l;
    l.push_front(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);
    l.push_front(6);
    // for(int i=0;i<10;i++){
    //     int a;
    //     cin>>a;
    //     l.push_back(a);
    // }
// print the linked list using foreach loop;
cout<<l<<endl;
l.reverse();
// printing linked list way2 , using iterator
for(auto it=l.begin();it!=l.end();it++){
    cout<<*it<<"-->";
}
// it gives the address of each element 
cout<<"NULL"<<endl;
// insert at some position pos
int pos=5;
list<int>::iterator it;
it = l.begin();
// it++;
// it++;
for(int i=0;i<pos;i++){
    it++;
}

l.insert(it,10);
cout<<l<<endl;
// l.erase(10);
int key=10;
cout<<"AFTER REMOVING 10:"<<endl;
l.remove(key);

// for(auto it = l.begin();it!=l.end();it++){
//     if(*it == key){
//         l.erase(it);
//         break;
//     }
// }
cout<<l<<endl;

l.pop_front();
cout<<l<<endl;
// l.pop_back();
l.sort();
cout<<l<<endl;
return 0;
}
