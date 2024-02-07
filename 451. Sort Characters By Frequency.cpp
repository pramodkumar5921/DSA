class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string ans;
        while(pq.size()>0){
            int itr=pq.top().first;
            char ch=pq.top().second;
            while(itr>0){
                ans+=ch;
                itr--;
            }
            pq.pop();
        }
        return ans;
    }
};
