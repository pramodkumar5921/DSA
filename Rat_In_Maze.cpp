#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sol[10][10]={0};
bool RatInMaze(char maze[][5],int i,int j,int n,int m){
    // basecase
    if(i==n-1 and j==m-1){
        sol[i][j]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    // recursive case
    sol[i][j]=1;
    // right se raasta dekh kar aa
    if(j+1<m and maze[i][j+1]!='x'){
        bool kya_right_se_raasta_milla=RatInMaze(maze,i,j+1,n,m);
        if(kya_right_se_raasta_milla==true){
            return true;
        }
    }
    // neech se raasta dekh kar aa
    if(i+1<n and maze[i+1][j]!='x'){
        bool kya_neeche_se_raasta_milla=RatInMaze(maze,i+1,j,n,m);
        if(kya_neeche_se_raasta_milla==true){
            return true;
        }
    }

    sol[i][j]=0;
    return false;

}
int main(){
    char maze[][5]={
        "0000",
        "00xx",
        "0000",
        "xx00"
    };
    int n=4,m=4;
    RatInMaze(maze,0,0,n,m);
    return 0;
}
