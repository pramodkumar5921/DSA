class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& pro, vector<int>& cap) {
        int n=pro.size();
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i]={cap[i],pro[i]};
        }
        sort(v.begin(),v.end());
        int i=0;
        priority_queue<int>pq;
        int ans=w;
        while(k>0){
            while(i<pro.size() and ans>=v[i].first){
                pq.push(v[i].second);
                i++;
            }
            if(pq.size()>0){
                ans+=pq.top();
                pq.pop();
            }
            k--;
        }
        return ans;
    }
};
