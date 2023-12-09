#include<bits/stdc++.h>
using namespace std;
int stringKhel(vector<string> &arr, int n) {
    int bb=0,rr=0,rb=0,br=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i][arr[i].size()-1]=='B' and arr[i][0] == 'B'){
            bb++;
        }
        else if(arr[i][arr[i].size()-1]=='R' and arr[i][0] == 'R'){
            rr++;
        }
        else if(arr[i][arr[i].size()-1] =='R' and arr[i][0] == 'B'){
            br++;
        }
        if(arr[i][arr[i].size()-1]=='B' and arr[i][0] == 'R'){
            rb++;
        }
    }
   
    int ans=0;
    int len=arr[0].size();
    if(rb==0 and br==0){
        ans = max(rr,bb)*len;
        // return ans;
    }
    else if(rb==br){
        ans = (bb+rr+2*(rb))*len;
        return ans;
    }
    else if(rb != br){
        ans = (bb+rr+1+2*min(rb,br))*len;
        return ans;
    }
    if(ans<len*2){
        return 0;
    }
    return ans;
}
