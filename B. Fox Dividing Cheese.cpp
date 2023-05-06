#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>helper(int &num){
    int two=0;
    int three=0;
    int five=0;
    int k1;
    while(num%2==0){
        two++;
        num=num/2;
    }
    while(num%3==0){
        three++;
        num=num/3;
    }
    while(num%5==0){
        five++;
        num=num/5;
    }
    k1=num;
    return {two,three,five,k1};
}
int main(){
    int p1,p2;
    cin>>p1>>p2;
    int gd=__gcd(p1,p2);
    p1=p1/gd;
    p2=p2/gd;
    vector<int>first=helper(p1);
    vector<int>second=helper(p2);
    if(first[3]!=second[3]){
        cout<<-1<<" ";
        return 0;
    }
    cout<<abs(first[0]-second[0])+abs(first[1]-second[1])+abs(first[2]-second[2]);
    cout<<endl;
    return 0;
}
