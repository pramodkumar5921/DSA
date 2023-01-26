class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int>left(nums.size());
        left[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            left[i]=max(left[i-1],nums[i]);
        }
        for(int i=0;i<left.size();i++){
            cout<<left[i]<<" ";
        }
        cout<<endl<<" ";
        vector<int>right(nums.size());
        right[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-1;i>0;i--){
            right[i-1]=max(right[i],nums[i-1]);
        }
        for(int i=0;i<right.size();i++){
            cout<<right[i]<<" ";
        }
        for(int i=0;i<nums.size();i++){
            if(left[i]==right[i]){
                return i;
            }
        }
        return -1;
    }
};
