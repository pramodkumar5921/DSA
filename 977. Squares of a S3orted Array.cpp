class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(1e4+5,0);
        for(int i=0;i<nums.size();i++){
            freq[abs(nums[i])]++;
        }
        vector<int>ans;
        for(int i=0;i<freq.size();i++){
            for(int j=0;j<freq[i];j++){
                if(freq[i]>0){
                    ans.push_back(i*i);
                }
            }
        }
        return ans;
    }
};
