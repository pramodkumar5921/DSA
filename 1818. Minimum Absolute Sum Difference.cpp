class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int mod=1e9+7;
       long long  int sum=0;
        vector<int>diff(n);
        for(int i=0;i<n;i++){
            diff[i]=abs(nums1[i]-nums2[i]);
            sum=(sum+diff[i])%mod;
        }
        sort(nums1.begin(),nums1.end());
        vector<int>best_diff(n);
        for(int i=0;i<n;i++){
            int j=lower_bound(nums1.begin(),nums1.end(),nums2[i])-nums1.begin();
            if(j!=0 and j!=n){
                best_diff[i]=min(abs(nums1[j]-nums2[i]),abs(nums1[j-1]-nums2[i]));
            }
            if(j==0){
                best_diff[i]=abs(nums2[i]-nums1[j]);
            }
            if(j==n){
                best_diff[i]=abs(nums2[i]-nums1[j-1]);
            }
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(abs(diff[i]-best_diff[i]),maxi);       
        }
        return (mod+sum-maxi)%mod;
    }
};
