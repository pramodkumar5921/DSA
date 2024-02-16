class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        while(pq.size()>0 and k>0){
            k-=pq.top().first;
            if(k>=0){
                pq.pop();
            }
        }
        return pq.size();
    }
};
