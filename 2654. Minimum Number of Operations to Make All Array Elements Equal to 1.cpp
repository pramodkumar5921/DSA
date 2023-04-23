class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++){
            vector<int>ans(n);
            ans[i]=nums[i];
            int cnt=0;
            for(int j=i+1;j<n;j++){
                ans[j]=__gcd(ans[j-1],nums[j]);
                cnt++;
                if(ans[j]==1){
                    mini=min(mini,cnt);
                    break;
                }
            }
            // mini=min(mini,cnt);
        }
        int x=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=1){
                x++;
            }
        }
        cout<<mini<<" ";
        bool ans=false;
        vector<int>v(n);
        v[1]=__gcd(nums[0],nums[1]);
        if(v[1]==1){
            ans=true;
        }
        for(int i=2;i<n;i++){
            v[i]=__gcd(v[i-1],nums[i]);
            if(v[i]==1){
                ans=true;
                break;
            }
        }
        if(ans==false){
            return -1;
        }
        return (mini+x-1);
    }
};
