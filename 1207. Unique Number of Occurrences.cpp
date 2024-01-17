class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        unordered_map<int,int>mp1;
        for(auto it:mp){
            if(mp1.find(it.second)!=mp1.end()){
                return false;
            }
            mp1[it.second]++;
        }
        return true;
    }
};
