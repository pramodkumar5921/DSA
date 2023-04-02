class Solution {
public:
    int miceAndCheese(vector<int>& r1, vector<int>& r2, int k) {
        int ans=0;
        priority_queue<int>pq;
        for(int i=0;i<r2.size();i++){
            pq.push(r1[i]-r2[i]);
            ans+=r2[i];
        }
        while(pq.size()>0 and k>0){
            ans+=pq.top();
            pq.pop();
            k--;
        }
        return ans;
    }
};
