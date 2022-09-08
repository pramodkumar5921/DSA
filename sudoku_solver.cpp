#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool issafetoput(int board[][9],int i,int j,int n,int number){
    // check row
    for(int k=0;k<n;k++){
        if(board[i][k]==number || board[k][j]==number){
            return false;
        }
    }
    // check columne 
    // for(int k=0;k<n;k++){
    //    if(board[k][j]==number){
    //         return false;
    //     }
    // }
    // check the box;

    n=sqrt(n);
    int si=(i/n)*n;
    int sj=(j/n)*n;

    for(int k=si;k<si+n;k++){
        for(int l=sj;l<sj+n;l++){
            if(board[k][l]==number){
                return false;
            }
        }
    }
    return true;

}
bool sudokusolver(int board[][9],int i,int j,int n){
    //basecase
    if(i==n){
        // sudoku is solved print it 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    // recursive case
    if(j==n){
        return sudokusolver(board,i+1,0,n);
    }
    if(board[i][j]!=0){
        return sudokusolver(board ,i,j+1,n);
    }
    for(int number=1; number<=n;number++){
        if(issafetoput(board,i,j,n,number)){
           // if its safe to put the number , then place it
           board[i][j]=number;           // and ask the recursion to solve the remaining sudoku
            bool kyabakisolvehua =sudokusolver(board, i,j+1,n);
            if(kyabakisolvehua){
                return true;
            }
            board[i][j]=0;
        }
    }
return false;
}

int main(){
    int board[9][9]=
    { {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
      {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
      {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
      {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
      {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
      {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
      {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
      {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
      {0, 0, 5, 2, 0, 6, 3, 0, 0} };
      sudokusolver(board ,0,0,9);
    return 0;
}
