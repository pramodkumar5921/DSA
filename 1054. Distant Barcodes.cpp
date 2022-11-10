class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& b) {
        if(b.size()<=1){
            return b;
        }
        unordered_map<int,int>mp;
        for(int i=0;i<b.size();i++){
            mp[b[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        vector<int>res;
        for(auto &it:mp){
            pq.push({it.second,it.first});
        }
       
        while(pq.top().first>0){
            pair<int,int>p1=pq.top();
            pq.pop();
            res.push_back(p1.second);
            p1.first--;
            pair<int,int>p2=pq.top();
            pq.pop();
           
            if(p2.first>0){
                res.push_back(p2.second);
                p2.first--;
            }
            pq.push(p1);
            pq.push(p2);
        }
        return res;
    }
};
