class Solution {
public:
    void remove(char ch,vector<bool>&vis,string &senate,int idx){
        while(true){
            if(senate[idx]==ch and vis[idx]==0){
                vis[idx]=1;
                break;
            }
            idx=(idx+1)%vis.size();
        }
    }
    string predictPartyVictory(string senate) {
        int rcnt=0;
        int n=senate.size();
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R'){
                rcnt++;
            }
        }
        int dcnt=0;
        dcnt=n-rcnt;
        vector<bool>vis(n,0);
        int idx=0;
        while(rcnt>0 and dcnt>0){
            if(vis[idx]==0){
                if(senate[idx]=='R'){
                    remove('D',vis,senate,idx);
                    dcnt--;
                }
                else{
                    remove('R',vis,senate,idx);
                    rcnt--;
                }
            }
            idx=(idx+1)%n;
        }
        if(rcnt==0){
            return "Dire";
        }
        return "Radiant";
    }
};
