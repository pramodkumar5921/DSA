#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool placekarnasafehai(int board[][10],int i,int j,int n){
    for(int k=0;k<n;k++){
        if(board[i][k] or board[k][j]){
            return false;
        }
    }
    int x=i,y=j;
    while(i>=0 and j<n){
        if(board[i][j]){
            return false;
        }
        i--;j++;
    }
    i=x;j=y;
    while(i>=0 and j>=0){
        if(board[i][j]){
            return false;
            }
            i--;j--;
    }
    return true;
}
bool Nqueen(int board[][10],int i,int n){
    // base case
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]){
                    cout<<"Q"<<" ";
                }
                else{
                    cout<<"_"<<" ";
                }
                // cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;// to print all confirgation 
    }
    // recursive case
    for(int j=0;j<n;j++){
        if(placekarnasafehai(board,i,j,n)==true){
            // if place karna safe hai,then place the
            // queen
        board[i][j]=1;
        bool kyabaakibaatbani=Nqueen(board,i+1,n);
        if(kyabaakibaatbani==true){
            return true;
        }
        // if baat nahi bani , toh i,j se queen hatao
        // and next cell par rakh kar dekho
        board[i][j]=0;

}
    }
    return false;

}
int main(){
    int n;
    int board[10][10]={0};
    cin>>n;
    Nqueen(board,0,n);
    return 0;
}

