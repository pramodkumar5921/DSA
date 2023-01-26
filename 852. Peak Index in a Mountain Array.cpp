class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;int e=arr.size()-1;
        while(s<e){
            int mid=(e-s)/2+s;
            if(arr[mid-1]<arr[mid] and arr[mid+1]<arr[mid]){
                return mid;
            }
            else if(arr[mid+1]>arr[mid]){
                s=mid;
            }
            else{
                e=mid;
            }
        }
        return -1;
    }
};
