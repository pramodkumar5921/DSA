class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       priority_queue<int,vector<int>,greater<int>>pq1,pq2;
       for(int i=0;i<g.size();i++){
           pq1.push(g[i]);
       }
       for(int i=0;i<s.size();i++){
           pq2.push(s[i]);
       }
       int cnt=0;
       while(pq1.size()>0 and pq2.size()>0){
           int greed=pq1.top();
           int cookies=pq2.top();
           if(greed<=cookies){
               cnt++;
               pq1.pop();pq2.pop();
           }
           else{
               pq2.pop();
           }
       }
       return cnt;
    }
};
