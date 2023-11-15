class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int ans=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i-1]!=arr[i]){
                ans=ans+1;
            }
        }
        return ans;
    }
};
