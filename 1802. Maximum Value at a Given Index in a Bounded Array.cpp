class Solution {
public:
    bool check(int mid,int n,int maxsum,int idx){
        long long int sum=mid;
        int l=idx;
        int r=n-idx-1;
        long long int rs=0;
        long long int ls=0;
        long long int m=mid-1;
        if(r<=m){
            rs=m*(m+1)/2-(m-r)*(m-r+1)/2;
        }
        if(r>m){
            rs=m*(m+1)/2+(r-m);
        }
        if(l<=m){
            ls=m*(m+1)/2-(m-l)*(m-l+1)/2;
        }
        if(l>m){
            ls=m*(m+1)/2+(l-m);
        }
        if(ls+rs+sum<=maxsum){
            return true;
        }
        return false;
    }
    int maxValue(int n, int index, int maxsum) {
        int l=1;
        int h=maxsum;
        int ans=0;
        
        while(l<=h){
            int mid=l+(h-l)/2;
            if(check(mid,n,maxsum,index)){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};
