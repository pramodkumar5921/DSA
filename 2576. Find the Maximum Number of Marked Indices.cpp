class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        priority_queue<int>small;
        priority_queue<int>large;
        for(int i=0;i<n/2;i++){
            small.push(nums[i]);
        }
        for(int i=n/2;i<n;i++){
            large.push(nums[i]);
        }
        int ans=0;
        while(small.size()>0 and large.size()>0){
            int tiny=small.top();
            int big=large.top();
            if(2*tiny<=big){
                ans+=2;
                small.pop();
                large.pop();
            }
            else{
                small.pop();
            }
        }
        return ans;
    }
};
