#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // <int>v;
    // v.reserve(10);vector
    // for(int i=1;i<=9;i++){
    //     v.push_back(6-i);
    //     cout<<"After inserting:"<<i<<", size becomes:"<<v.capacity()<<endl;
    // }

    // Taking user input 
   
    // cout<<"size :"<<v.size()<<endl;
    // cout<<"capicity :"<<v.capacity()<<endl;
    int n;
    cin>>n;
    // vector<int>v(n);// Create n buckets inside
    // vector 
    // vector<int>v(n,10);
    // // for(int i=0;i<=5;i++){
    // //     cin>>v[i];
    // // }
    vector<int>v{1,2,10,0,4};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;

    // int s=v.size();
    // for(int i=0;i<s;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"size :"<<v.size()<<endl;
    // cout<<"capicity :"<<v.capacity()<<endl;

    // // v.pop_back();
    // // when it gets full it double in size 
    // // automaticlly
    // sort(v.begin(),v.end());// 
    // // vector ka starting address ,vector ka ending 
    // // address 
    // // The case in array is also the same only 
    // // sort(arr,arr+n):
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    //     // syntax vector<datatype>vector_name;
    // // vector is a self growable array;
    return 0;
}
// theory of vector or theory of vector 
// push_back();
// pop_back();
// size(); or v.size();
// capacity();
/////////////////////////////vector_passed_by_reference////////////////////////
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void print(vector<int>v){
   
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        // v[i]++;
}
cout<<endl;
}

//     for(int i=0;i<v.size();i++){
//         // cout<<v[i]<<" ";
//         v[i]++;
//         cout<<endl;
// }
// cout<<endl;
void updatevector(vector<int>&v){
    for(int i=0;i<v.size();i++){
        v[i]++;
    }
}

// cout<<endl<<v.size()<<endl;
int main(){
    vector<int>v{1,2,10,0,4};
    print(v);
    updatevector(v);
//    cout<<"size: "<<v.size()<<endl;
//    cout<<"capacity: "<<v.capacity()<<endl;

   print(v);
   updatevector(v);
    // sort(v.begin(),v.end());
//    cout<<endl;
//    sort(v.begin(),v.end());
    print(v);
return 0;
}














