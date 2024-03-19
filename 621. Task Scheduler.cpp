class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int>pq;
        unordered_map<char,int>mp;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        for(auto it:mp){
            pq.push(it.second);
        }
        int ans=0;
        while(pq.size()>0){
            vector<int>temp;
            for(int i=0;i<=n;i++){
                if(pq.size()>0){
                    int ele=pq.top();
                    pq.pop();
                    temp.push_back(ele-1);
                }
            }
            for(int i=0;i<temp.size();i++){
                if(temp[i]!=0){
                    pq.push(temp[i]);
                }
            }
            if(pq.size()==0){
                ans=ans+temp.size();
            }
            else{
                ans=ans+n+1;
            }
        }
        return ans;
    }
};
