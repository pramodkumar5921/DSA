class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n,0);
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            if(i==0){
                arr[i]=nums[i];
            }
            else{
                arr[i] = max(pq.top(),nums[i]);
            }
            pq.push(nums[i]);
        }
        int maxi=INT_MIN;
        long long ans=0;
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            if(st.size()>0 and maxi!=INT_MIN){
                long long cnt=(arr[i]-st.top())*(long long)(maxi);
                ans = max(ans,cnt);
            }
            if(st.size()>0 and st.top()>maxi){
                maxi=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return ans;
    }
};
