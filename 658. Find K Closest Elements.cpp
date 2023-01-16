class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       priority_queue<pair<int,int>>pq;
       for(auto ele:arr){
           pq.push(make_pair(abs(x-ele),ele));
           if(pq.size()>k){
               pq.pop();
           }
       }
    //    for(auto it:pq){
    //        cout<<pq.top().second;
    //         pq.pop();
    //    } 
       vector<int>ans;
       while(pq.size()>0){
           ans.push_back(pq.top().second);
           pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
 
