class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        priority_queue<int,vector<int>,greater<int>>pq;
        unordered_map<int,int>mp;
        for(int i=0;i<hand.size();i++){
           if(mp.find(hand[i])==mp.end()){
             pq.push(hand[i]);
           }
            mp[hand[i]]++;
        }
        if(hand.size()%groupSize!=0){
            return false;
        }
        // priority_queue<int,vector<int>,greater<int>>pq1=pq;
        // int first=pq1.top();
        // pq1.pop();
        // while(pq1.size()>0){
        //     int temp=pq1.top();
        //     if(temp-1 != first){
        //         return false;
        //     }
        //     first=temp;
        //     pq1.pop();
        // }
        while(pq.size()>0){
            int temp=groupSize;
            vector<int>rem;
            while(temp>0 and pq.size()>0){
                rem.push_back(pq.top());
                mp[pq.top()]--;
                if(mp[pq.top()]==0){
                    mp.erase(pq.top());
                }
                pq.pop();
                temp--;
            }
            if(temp>0){
                return false;
            }
            for(int i=1;i<rem.size();i++){
                if(rem[i-1] != rem[i]-1){
                    return false;
                }
            }
            for(int i=0;i<rem.size();i++){
                if(mp[rem[i]]>0){
                    pq.push(rem[i]);
                }
            }
        }
        return true;
    }
};
