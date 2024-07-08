class Solution {
public:
    int findTheWinner(int n, int k) {
        // Brute Force
        unordered_map<int,int>mp;
        vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        int cnt1=0;
        while(cnt1<=10000){
            for(int i=1;i<=n;i++){
                arr.push_back(i);
            }
            cnt1=cnt1+1;
        }
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])==mp.end()){
                cnt=cnt+1;
            }
            if(cnt==k){
                if(mp.size()==n-1){
                    return arr[i];
                }
                mp[arr[i]]++;
                cnt=0;
            }
        }
        return -1;
    }
};
