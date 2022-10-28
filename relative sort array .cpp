class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            int data = arr2[i];
           while(mp[data]>0){
               ans.push_back(data);
               mp[data]--;
               // mp[data].erase();
           }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>0){
                while(it->second>0){
                ans.push_back(it->first);
                    it->second--;
                }
            }
        }
        return ans;
    }
};
