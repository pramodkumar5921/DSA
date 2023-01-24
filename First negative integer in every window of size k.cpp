//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
    vector<long long>ans;
    int i=0;int j=0;
    queue<int>q;
    while(j<n){
        if(a[j]<0){
        q.push(a[j]);
        }
        // if(j-i+1<k){
       
        //      j++;}
        if(j-i+1==k){
            if(q.size()==0){
                ans.push_back(0);
            }
            else{
                ans.push_back(q.front());
                if(a[i]==q.front()){
                    q.pop();
                }
                // i++;
            }
            i++;
        
        }
        j++;
    }
    return ans;
                                                 
 }
