class Solution {
public:
     bool check(vector<int>&time,long long int count,long long int mid){
         long long  cnt=0;
         for(int i=0;i<time.size();i++){
             cnt+=mid/time[i];
         }
         return cnt>=count;
     }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l=1;
        // sort(time.begin(),time.end());
        long long high=*max_element(time.begin(),time.end());
        long long r=high*totalTrips;
        long long ans=-1;
        while(l<=r){
          long long int mid=l+(r-l)/2;
          if(check(time,totalTrips,mid)){
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
