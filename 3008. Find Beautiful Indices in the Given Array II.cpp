class Solution {
public:
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
    vector<int> beautifulIndices(string s, string a, string b, int k) {
    string str=b+'#'+s;
    int m=b.size();
    vector<int>zarray=calzarray(str);
    // priority_queue<int,vector<int>,greater<int>>pq1,pq2;
        vector<int>arr1,arr2;
    for(int i=0;i<str.size();i++){
        if(zarray[i]==m){
            arr2.push_back(i-m-1);
        }
    }
    string str1=a+'#'+s;
    int n=a.size();
    vector<int>zarray1=calzarray(str1);
    for(int i=0;i<str1.size();i++){
        if(zarray1[i]==n){
            arr1.push_back(i-n-1);
        }
    }
    vector<int>res;
    for(int i=0;i<arr1.size();i++){
        int first=arr1[i]-k;
        int second=k+arr1[i];
        int idx=lower_bound(arr2.begin(),arr2.end(),first)-arr2.begin();
        if(idx< arr2.size()  and arr2[idx]<=second){
            res.push_back(arr1[i]);
            // break;
        }
    }
    // sort(res.begin(),res.end());
    return res;
    }
};
