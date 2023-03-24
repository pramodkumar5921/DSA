class Solution {
public:
    bool check(long long int mid,vector<int>&ranks,int cars){
        long long cnt=0;
        for(int i=0;i<ranks.size();i++){
            cnt=cnt+sqrt(mid/ranks[i]);
        }
        return cnt>=cars;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        int maxi=*max_element(ranks.begin(),ranks.end());
        int mini=*min_element(ranks.begin(),ranks.end());
        long long int s=mini;
        long long int l=maxi*(1e6)*(1e6);
        long long ans=0;
        while(s<=l){
            long long mid=s+(l-s)/2;
            if(check(mid,ranks,cars)){
                ans=mid;
                l=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};
