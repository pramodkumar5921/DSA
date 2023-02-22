class Solution {
public:
    bool check(vector<int>&w,int days,int mid){
       int sum1=0;
       int cnt=1;
       for(auto it:w){
           sum1+=it;
           if(sum1>mid){
               sum1=it;
               cnt++;
           }
       }
        return cnt<=days;
    }
    int shipWithinDays(vector<int>& w, int days) {
       int l=*max_element(w.begin(),w.end());
       long long int sum=0;
       for(auto it:w){
           sum+=it;
       }
       long long int r=sum;
       int ans=0;
       while(l<=r){
           int mid=l+(r-l)/2;
           if(check(w,days,mid)){
               ans=mid;
               r=mid-1;
           }
           else{
               l=mid+1; 
           }

       }

       return ans;
    }
};
