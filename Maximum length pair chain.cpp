#include<bits/stdc++.h>
bool compare(pair<int, int> &temp1,pair<int, int> &temp2){
    if(temp1.second<temp2.second){
        return 1;
    }
    else{
        return 0;
    }
}
int maxLengthChain(vector<pair<int, int>> &p, int n) {
    sort(p.begin(),p.end(),compare);
    int cnt=1;
    int x2=p[0].second;
    for(int i=1;i<n;i++){
        int y1=p[i].first;
        int y2=p[i].second;
        if(y1>x2){
            cnt++;
            x2=y2;
        }
    }
    return cnt;
}
