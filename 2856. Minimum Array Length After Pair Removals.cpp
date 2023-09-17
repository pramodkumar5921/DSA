class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
       priority_queue <int, vector<int>, greater<int>> pq1;
       priority_queue <int, vector<int>, greater<int>> pq2;
       for(int i=0;i<nums.size()/2;i++){
           pq1.push(nums[i]);
       }
        for(int i=nums.size()/2;i<nums.size();i++){
           pq2.push(nums[i]);
       }
        vector<int>ans;
        while(pq1.size()>0 and pq2.size()>0){
            if(pq1.top()<pq2.top()){
                pq1.pop();pq2.pop();
            }
            else{
                ans.push_back(pq2.top());
                pq2.pop();
            }
        }
        return ans.size()+pq1.size()+pq2.size();
    }
};
