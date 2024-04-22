class Solution {
public:
    void fillNeighbours(unordered_set<string>&st,string curr,queue<string>&que){
        for(int i=0;i<4;i++){
            char ch=curr[i];

            char dec= ch=='0'? '9':ch-1;
            char inc= ch=='9'? '0':ch+1;

            curr[i]=dec;
            if(st.find(curr)==st.end()){
                st.insert(curr);
                que.push(curr);
            }
            curr[i]=inc;
             if(st.find(curr)==st.end()){
                st.insert(curr);
                que.push(curr);
            }

            curr[i]=ch;
        }
    }
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>st;
        for(int i=0;i<deadends.size();i++){
            st.insert(deadends[i]);
        }
        string start="0000";
        // for(auto it:st){
            if(st.find(start)!=st.end()){
                return -1;
            }
        // }
        queue<string>que;
        que.push(start);
        int level=0;
        while(que.size()>0){
            int n=que.size();
            while(n--){
                string curr=que.front();
                que.pop();
                if(curr==target){
                    return level;
                }
                fillNeighbours(st,curr,que);
            }
            level++;
        }
        return -1;
    }
};
