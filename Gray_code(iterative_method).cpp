#include <bits/stdc++.h> 
vector<int> grayCodeSequence(int n) {
    int num=1<<n;
    // if()
    vector<int>arr;
    for(int i=0;i<num;i++){
        int p=0,cnt=-1;
        int ans=0;
        for(int j=n-1;j>=0;j--){
            if(i&(1<<j)==0){
                cnt=0;
            }
            else{
                cnt=1;
            }
            ans+=(p xor cnt)*(1<<j);
            p=cnt;
        }
        arr.push_back(ans);
    }
    return arr;
}
