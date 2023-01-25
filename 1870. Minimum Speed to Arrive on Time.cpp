class Solution {
public:
    bool check(vector<int>&dist,double hour,int mid){
        double cnt=0;
        for(int i=0;i<dist.size()-1;i++){
            if(dist[i]%mid==0){
                cnt+=dist[i]/mid;
            }
            else{
                cnt+=dist[i]/mid+1;
            }
        }
             double last=((double)dist[dist.size()-1])/mid;
        if(last+cnt<=hour){
            return true;
        }
        return false;
    }
        int minSpeedOnTime(vector<int>& dist, double hour) {
        int s=1;
        int e=1e7;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(dist,hour,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};
    
