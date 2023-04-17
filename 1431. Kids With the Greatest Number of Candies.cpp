class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        int maxi=*max_element(candies.begin(),candies.end());
        vector<bool>v;
        for(int i=0;i<candies.size();i++){
            int temp=extra+candies[i];
            if(temp<maxi){
                v.push_back(false);
            }
            else{
                v.push_back(true);
            }
        }
        return v;
    }
};
