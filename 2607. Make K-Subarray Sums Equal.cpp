class Solution {
public:
    long long  find(vector<int>&temp,int cur){
        long long ans=0;
        for(int i=0;i<temp.size();i++){
            ans+=abs(cur-temp[i]);
        }
        return ans;
    }
    long long makeSubKSumEqual(vector<int>& arr, int k) {
        long long ans=0;
        int n=arr.size();
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]){
                continue;
            }
            vector<int>temp;
            int idx=i;
            while(vis[idx]==0){
                long long val=arr[idx];
                vis[idx]++;
                idx=idx+k;
                idx=idx%n;
                temp.push_back(val);
            }
            int sz=temp.size();
            sort(temp.begin(),temp.end());
            long long  cur=0;
            if(sz%2!=0){
                int mid=sz/2;
                cur=find(temp,temp[mid]);
            }
            else{
                int mid=sz/2;
                  cur=find(temp,temp[mid]);
                  cur=min(cur,find(temp,temp[mid-1]));
            }
            ans+=cur;
        }
        return ans;
    }
};
