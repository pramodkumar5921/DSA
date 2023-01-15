class Solution {
public:
   void merge(vector<int>&nums,int l,int mid,int r){
       int n1=mid-l+1;
       int n2=r-mid;
       int a[n1];
       int b[n2];
       for(int i=0;i<n1;i++){
           a[i]=nums[l+i];
       }
       for(int i=0;i<n2;i++){
           b[i]=nums[mid+1+i];
       }
       int i=0,j=0,k=l;
       while(i<n1 and j<n2){
           if(a[i]<b[j]){
               nums[k]=a[i];
               k++;i++;
           }
           else{
               nums[k]=b[j];
               k++;j++;
           }
       }
       while(i<n1){
           nums[k]=a[i];
           k++;i++;
       }
       while(j<n2){
           nums[k]=b[j];
           k++;j++;
       }
   }
    void mergesort(vector<int>&nums,int l,int r){
        if(l<r){
            int mid=l+(r-l)/2;
        mergesort(nums,l,mid);
        mergesort(nums,mid+1,r);
        merge(nums,l,mid,r);
        }
    }
    void sortColors(vector<int>& nums) {
        int l=0;
        int r=nums.size();
        mergesort(nums,l,r-1);
        return ;
    }
};
