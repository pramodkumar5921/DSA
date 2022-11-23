class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       vector<vector<int>>ans;
       int min_diff=INT_MAX;
    //    int key;
    sort(arr.begin(),arr.end());
       for(int i=0;i<arr.size()-1;i++){
            // key=arr[i]-arr[i+1];
           min_diff=min(min_diff,arr[i+1]-arr[i]);
       }
       for(int i=0;i<arr.size()-1;i++){
           if(arr[i+1]-arr[i]==min_diff){
               ans.push_back({arr[i],arr[i+1]});
           }
       }
       return ans;
    }
};
