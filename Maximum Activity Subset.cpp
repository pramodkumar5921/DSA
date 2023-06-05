#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>&a,pair<int,int>&b){
    if(a.second<b.second){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>time(n);
    for(int i=0;i<n;i++){
        cin>>time[i].first>>time[i].second;
    }
    sort(time.begin(),time.end(),cmp);
    int start=time[0].first;
    int end=time[0].second;
    int cnt=1;
    for(int i=1;i<n;i++){
        int x=time[i].first;
        int y=time[i].second;
        if(x>=end){
            cnt++;
            start=x;
            end=y;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
