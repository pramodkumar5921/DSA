class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n;
         n=nums.size();
        if(n==k){
            return;
        }
        // void solve(int k,int n ){
        if(k<n){
            vector<int>ans;
            for(int i=n-k;i<n;i++){
                ans.push_back(nums[i]);
            }
            for(int i=0;i<n-k;i++){
                int key=nums[i];
                ans.push_back(key);
            }
            nums.erase(nums.begin(),nums.end());
            for(int i=0;i<ans.size();i++){
                nums.push_back(ans[i]);
            }
        // }
        return ;
    }
        if(k>n){
            while(true){
                k=k%n;
                if(k<n){
                    vector<int>ans;
            for(int i=n-k;i<n;i++){
                ans.push_back(nums[i]);
            }
            for(int i=0;i<n-k;i++){
                int key=nums[i];
                ans.push_back(key);
            }
            nums.erase(nums.begin(),nums.end());
            for(int i=0;i<ans.size();i++){
                nums.push_back(ans[i]);
            }
            return;
                }
            }
        }
            return;
    }
};
