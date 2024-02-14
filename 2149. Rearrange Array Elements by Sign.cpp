class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>pos,neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push(nums[i]);
            }
            else{
                neg.push(nums[i]);
            }
        }
        vector<int>ans;
        while(pos.size()>0 and neg.size()>0){
            int ele1=pos.front();
            ans.push_back(ele1);
            int ele2=neg.front();
            ans.push_back(ele2);
            pos.pop();
            neg.pop();
        }
        return ans;
    }
};
