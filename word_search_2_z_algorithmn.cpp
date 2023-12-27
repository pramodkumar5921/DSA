#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
vector<int>calzarray(string str){
    int n=str.size();
    vector<int>z(n,0);
    for(int i=1,l=0,r=0;i<n;i++){
        if(i<=r){
            z[i]=min(z[i-l],r-i+1);
        }
        while(i+z[i]<n and str[i+z[i]]==str[z[i]]){
            z[i]++;
        }
        if(i+z[i]-1>r){
            l=i;
            r=i+z[i]-1;
        }
    }
    return z;
}
int kmp(string s, string p){
    string str=p+'#'+s;
    // int nlwn=str.size();
    vector<int>zarray=calzarray(str);
    int ans=0;
    int m=p.size();
    for(int i=0;i<str.size();i++){
        if(zarray[i]==m){
            ans++;
        }
    }
    return ans;
}
int wordSearch(string grid[], int n, int m, string word) {
    int occurences=0;
    for(int i=0;i<n;i++){
        occurences+=kmp(grid[i],word);
        occurences+=kmp(string(grid[i].rbegin(),grid[i].rend()),word);
    }

    for(int j=0;j<m;j++){
        string str;
        for(int i=0;i<n;i++){
            str.push_back(grid[i][j]);
        }
         occurences+=kmp(str,word);
        occurences+=kmp(string(str.rbegin(),str.rend()),word);
    }

    // upper diaginal
    for(int i=0;i<n;i++){
        string str;
        for(int j=0;i+j<n && j<m ;j++){
            str.push_back(grid[i+j][j]);
        }
        occurences+=kmp(str,word);
        occurences+=kmp(string(str.rbegin(),str.rend()),word);
    }
    for(int j=1;j<m;j++){
        string str;
        for(int i=0;i<n && j+i<m;i++){
            str.push_back(grid[i][j+i]);
        }
         occurences+=kmp(str,word);
        occurences+=kmp(string(str.rbegin(),str.rend()),word);
    }
    
    for(int i=0;i<n;i++){
        string str;
        for(int j=0;i-j>=0 && j<n ;j++){
            str.push_back(grid[i-j][j]);
        }
         occurences+=kmp(str,word);
        occurences+=kmp(string(str.rbegin(),str.rend()),word);
    }

    for(int j=1;j<m;j++){
        string str;
        for(int i=n-1;i>=0 && j+(n-1)-i<m;i--){
            str.push_back(grid[i][j+n-1-i]);
        }
        occurences+=kmp(str,word);
        occurences+=kmp(string(str.rbegin(),str.rend()),word);
    }
    return occurences;
}
