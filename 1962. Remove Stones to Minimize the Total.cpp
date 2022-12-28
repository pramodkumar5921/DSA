class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i:piles){
            pq.push(i);
        }
        int cnt=0;
        while(cnt!=k){
            int t=pq.top();
            pq.pop();
            t=t-t/2;
            pq.push(t);
            cnt++;
        }
        int ans=0;
        while(pq.size()>0){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};
