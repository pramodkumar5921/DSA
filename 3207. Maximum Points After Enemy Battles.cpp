class Solution {
public:
    long long maximumPoints(vector<int>& arr, int Energy) {
        sort(arr.begin(),arr.end());
        long long ans=0;
        if(Energy<arr[0]){
            return 0;
        }
        while(arr.size()>0){
            int first=arr[0];
            ans+= (Energy/first);
            Energy = Energy%first;
            Energy += arr.back();
            arr.pop_back();
        }
        return ans;
    }
};
