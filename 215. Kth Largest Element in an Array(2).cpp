class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n){
            return 0;
        }
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        int ans=-1;
        while(pq.size()>0 and k>0){
            ans=pq.top();
            pq.pop();
            k--;
        }
        return ans;
    }
};
