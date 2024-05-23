class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int prefix=1,suffix=1;
        int maxi=INT_MIN;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            if(prefix==0){
                prefix=1;
            }
            if(suffix==0){
                suffix=1;
            }
            prefix=arr[i]*prefix;
            suffix=arr[n-i-1]*suffix;
            maxi=max({maxi,prefix,suffix});
        }
        return maxi;
    }
};
