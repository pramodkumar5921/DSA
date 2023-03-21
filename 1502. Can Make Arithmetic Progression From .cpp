class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
      sort(arr.begin(),arr.end());
      int first=arr[0];
      int second=arr[1];
      int diff=second-first;
      for(int i=1;i<arr.size();i++){
          if(arr[i]-arr[i-1]!=diff){
              return false;
          }
      }
      return true;
    }
};
