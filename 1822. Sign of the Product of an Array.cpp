class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long  pdt=1;
        for(int i=0;i<nums.size();i++){
           if(nums[i]>0){
               pdt=pdt*1;
           }
           else if(nums[i]<0){
               pdt=-pdt;
           }
           else{
               return 0;
           }
        }
        if(pdt<0){
            return -1;
        }
        if(pdt>0){
            return 1;
        }
        return 0;
    }
};
