class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        priority_queue<int>pq;
        priority_queue<int>tq;
        for(int i=0;i<players.size();i++){
            pq.push(players[i]);
        }
        for(int i=0;i<trainers.size();i++){
            tq.push(trainers[i]);
        }
        int ans=0;
       while(pq.size()>0 and tq.size()>0){
           if(pq.top()>tq.top()){
               pq.pop();
           }
           else if(pq.top()<=tq.top()){
               ans++;
               pq.pop();
               tq.pop();
           }
       }
       return ans;

    }
};
