class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int total_cost=0;
      int total_gas=0;
      for(int i=0;i<cost.size();i++){
          total_cost+=cost[i];
          total_gas+=gas[i];
      }
      if(total_cost>total_gas){
          return -1;
      } 
      int start=0;
      int curr=0;
      for(int i=0;i<cost.size();i++){
           curr+=gas[i]-cost[i];
          if(curr<0){
            start=i+1;
            curr=0;
          }
      }
      return start;
    }
};
