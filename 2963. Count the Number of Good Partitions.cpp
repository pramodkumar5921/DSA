class Solution {
const int m=1e9+7;
public:
    long long mod(long long x){
        return ((x%m+m)%m);
    }
    long long multiply(long long a,long long b){
        return mod(mod(a)*mod(b));
    }
    long long power(long long a,long long n){
        long long res=1;
        while(n>0){
            if(n%2==1){
                res=multiply(res,a);
                n--;
            }
            a=multiply(a,a);
            n=n/2;
        }
        return res;
    }
    int numberOfGoodPartitions(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        int cnt=1;
        int i=0,j=0;
        while(i<nums.size()){
            if(i>j){
                cnt++;
            }
            j=max(mp[nums[i]],j);
            i++;
        }
    int ans= (int)power(2,cnt-1);
    return ans;
    }
};
