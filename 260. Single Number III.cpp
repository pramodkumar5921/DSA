class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      int xsum=0;
      for(int i=0;i<nums.size();i++){
        xsum=xsum^nums[i];
      }
      int bit=0;
      for(int i=0;i<32;i++){
        if(xsum&(1<<i)){
            bit=i;
            break;
        }
      }
      int zero=0,one=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]&(1<<bit)){
            one=one^nums[i];
        }
        else{
            zero=zero^nums[i];
        }
      }

      return {zero,one};
    }
};
