class Solution {
public:
    int maxProfitAssignment(vector<int>& diff, vector<int>& profit, vector<int>& worker) {
      priority_queue<int>p(worker.begin(),worker.end());
      priority_queue<vector<int>>q;
      for(int i=0;i<diff.size();i++){
          q.push({profit[i],diff[i]});
      }
      int ans=0;
      while(p.size()>0 and q.size()>0){
          if(q.top()[1]>p.top()){
              q.pop();
          }
          else{
              ans+=q.top()[0];
              p.pop();
          }
      }
      return ans;
    }
};
