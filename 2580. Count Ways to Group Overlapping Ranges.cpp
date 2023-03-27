class Solution {
public:
    long long power(long long a,long long b){
        long long ans=1;
        long long rem=1e9+7;
        while(b>0){
            if(b&1!=0){
                ans=(ans*(a%rem))%rem;
            }
            a=((a%rem)*(a%rem))%rem;
            b=b>>1;
        }
        return ans;
    }
    int countWays(vector<vector<int>>& nums) {
        int cnt=1;
        sort(nums.begin(),nums.end());
        int ini=nums[0][0];
        int end=nums[0][1];
        for(int i=1;i<nums.size();i++){
            int temp1=nums[i][0];
            int temp2=nums[i][1];
            if(temp1<=end){
                end=max(end,temp2);
            }
            else{
                cnt++;
                end=temp2;
            }
             
        }
        cout<<cnt<<" ";
        return power(2,cnt);
    }
};
