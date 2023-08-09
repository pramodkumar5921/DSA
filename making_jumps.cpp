#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int ymin;
    int ymax;
}limit;
int okcell=0;
int n;
limit row[12];
int vis[12][12];
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
bool  valid(int x,int y){
    if(x<1 || x>n || y<row[x].ymin || y>row[x].ymax || vis[x][y]==1){
        return false;
    }
    return true;
}
void solve(int x,int y,int total){
    // base case
    if(total>okcell){
        okcell=total;
    }
    // recursive case
    for(int i=0;i<8;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(valid(nx,ny)){
            vis[nx][ny]=true;
            solve(nx,ny,total+1);
            vis[nx][ny]=false;
        }
    }
   return ;
}
int main(){
    cin>>n;
    int t=1;
    do{
        int totalcell=0;
        okcell=0;
        for(int i=1;i<=n;i++){
            int col,len;
            cin>>col>>len;
            row[i].ymin=col+1;
            row[i].ymax=row[i].ymin+len-1;
            for(int j=row[i].ymin;j<=row[i].ymax;j++){
                vis[i][j]=false;
               
            }
                 totalcell+=len;
        }
        vis[1][1]=true;
        solve(1,1,1);
        cout<<"case "<<t++<<", "<<(totalcell-okcell);
        if(totalcell-okcell == 1){
            cout<<" square cannot be reached.";
        }
        else{
            cout<<" squares cannot be reached.";
        }
        cout<<"\n";
        cin>>n;
    }while(n!=0);
    return 0;
}
