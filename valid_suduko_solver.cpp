#include<bits/stdc++.h>
bool full(int matrix[9][9],int n){
    int cnt=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(matrix[i][j]!=0){
                cnt++;
            }
        }
    }
    return cnt==81;
}
bool row(int matrix[9][9],int x,int val){
    for(int i=0;i<9;i++){
        if(matrix[x][i]==val){
            return false;
        }
    }
    return true;
}
bool col(int matrix[9][9],int y,int val){
    for(int i=0;i<9;i++){
        if(matrix[i][y]==val){
            return false;
        }
    }
    return true;
}
bool mat(int matrix[9][9],int x,int y,int val){
    int sx=3*(x/3);
    int sy=3*(y/3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[sx+i][sy+j]==val){
                return false;
            }
        }
    }
    return true;
}
bool valid(int matrix[9][9],int n,int x,int y,int val){
    return (row(matrix,x,val)) && (col(matrix,y,val))&&(mat(matrix,x,y,val));
}
bool place(int matrix[9][9],int num,int x,int y,int n){
    return valid(matrix,n,x,y,num);
}
bool solve(int matrix[9][9],int x,int y,int n){
    if(full(matrix,n)){
        int val=matrix[x][y];
        if(valid(matrix,n,x,y,val)){
            return true;
        }
    }
    if(x==8){
        return true;
    }
    if(y==8){
        return solve(matrix,x+1,0,n);
    }
    if(matrix[x][y]!=0){
        return solve(matrix,x,y+1,n);
    }
    for(int num=1;num<=9;num++){
        if(place(matrix,num,x,y,n)){
            matrix[x][y]=num;
            bool next=solve(matrix,x,y+1,n);
            if(next==true){
                return true;
            }
            matrix[x][y]=0;
        }
    }
    return false;
}
bool isItSudoku(int matrix[9][9]) {
    return solve(matrix,0,0,9);
}
