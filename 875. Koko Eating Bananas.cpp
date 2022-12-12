class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int right=*max_element(piles.begin(),piles.end());
        int left=1;
        // int ht=0;
        while(left<right){
            int ht=0;
            int mid=left+(right-left)/2;
            for(int i=0;i<piles.size();i++){
                if(piles[i]%mid==0){
                    ht+=piles[i]/mid;
                }
                else{
                    ht+=piles[i]/mid+1;
                }
            }
            // if(ht==h){
            //     return mid;
            // }
             if(ht<=h){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};
