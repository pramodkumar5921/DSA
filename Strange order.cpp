#include<bits/stdc++.h>
using namespace std;
vector<int>prime_div(int n){
    // sieve prime_factorisation
    vector<int>temp;
    for(int i=2;i*i<=n;i++){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                }
                temp.push_back(i);
            }
    }
    if(n>1){
        temp.push_back(n);
    }
    return temp;
}
int main(){
    int n;
    cin>>n;
    unordered_map<int,vector<int>>mp;
    priority_queue<int>pq;
    for(int i=1;i<=n;i++){
        vector<int>prime=prime_div(i);
        for(int j=0;j<prime.size();j++){
            mp[prime[j]].push_back(i);
        }
        pq.push(i);
    }
    vector<int> vis(n+1,0);
    while(pq.size()>0){
        int num=pq.top();
        vector<int>temp;
        if(vis[num]==0){
        vector<int>prime=prime_div(num);
        for(int i=0;i<prime.size();i++){
            for(auto it:mp[prime[i]]){
              if (vis[it] == 0) {
                temp.push_back(it);
                vis[it] = 1;
              }
            }
        }
        sort(temp.rbegin(),temp.rend());
        for(auto it:temp){
            cout<<it<<" ";
        }
        }
        pq.pop();
    }
    cout<<1<<" ";
    return 0;
}
