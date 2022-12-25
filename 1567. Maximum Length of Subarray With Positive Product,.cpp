class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int poslen=0,neglen=0,maxval=0;
        for(int i:nums){
            if(i==0){
                poslen=0,neglen=0;
            }
            else{
                if(i<0){
                    swap(poslen,neglen);
                }
                if(poslen>0 || i>0){
                    poslen++;
                }
                if(neglen>0 || i<0){
                    neglen++;
                }
            }
            maxval=max(maxval,poslen);
        }
        return maxval;
    }
};
