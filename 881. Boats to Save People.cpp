class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans=0;
        int i=0;
        sort(people.begin(),people.end());
        deque<int>dq;
        int n=people.size();
        for(int i=0;i<n;i++){
            dq.push_back(people[i]);
        }
        while(dq.size()>0){
            int first=0,sec=0;
            if(dq.size()>0){
             first=dq.front();
              dq.pop_front();
            }
            if(dq.size()>0){
             sec=dq.back();
            dq.pop_back();
            }

            if(sec+first<=limit){
                ans++;
            }
            else{
                ans++;
                dq.push_front(first);
            }
        }
        return  ans;
    }
};
