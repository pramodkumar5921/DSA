class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0,j=0;
        unordered_map<int,int>mp;
        priority_queue<int>pq;
        vector<int>temp;
        int n=nums.size();
        while(i<n and j<n){
            mp[nums[i]]++;
            pq.push(nums[i]);
            if(i-j+1==k){
                int num;
                while(pq.size()>0){
                    num=pq.top();
                    if(mp.find(num)!=mp.end()){
                        temp.push_back(num);
                        pq.pop();
                        break;
                    }
                    else{
                        pq.pop();
                    }
                }
                if(nums[j]!=num){
                    pq.push(num);
                }
                mp[nums[j]]--;
                if(mp[nums[j]]==0){
                    mp.erase(nums[j]);
                }
                j++;
            }
            i++;
        }
        return temp;
    }
};
