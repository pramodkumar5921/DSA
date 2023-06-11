#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void countsort(vector<int>&temp){
    int n=temp.size();
    int mini=*min_element(temp.begin(),temp.end());
    int maxi=*max_element(temp.begin(),temp.end());
    vector<int>freq(maxi-mini+2);
    for(int i=0;i<n;i++){
        freq[temp[i]-mini]++;
    }
    for(int i=0;i<freq.size();i++){
        for(int j=0;j<freq[i];j++){
            cout<<(i+mini)<<" ";
        }
    }
    return;
}
int main(){
    vector<int>temp={8,0,4,-1,-3,3,0,2,87,3,67,90};
    countsort(temp);
    return 0;
}
