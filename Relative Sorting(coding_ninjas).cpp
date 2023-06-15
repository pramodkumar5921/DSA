#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> relativeSorting(vector<int> &arr, vector<int> &brr, int n, int m)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for (int i = 0; i < m; i++) {
        if (mp.find(brr[i]) != mp.end()) {
            while (mp[brr[i]] > 0) {
                ans.push_back(brr[i]);
                mp[brr[i]]--;
            }
        }
    }
    vector<int>remaining;
    for(auto it:mp){
        while(it.second>0){
            remaining.push_back(it.first);
            it.second--;
        }
    }
    sort(remaining.begin(),remaining.end());
    ans.insert(ans.end(),remaining.begin(),remaining.end());
    return ans;
}
