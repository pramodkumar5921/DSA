class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        deque<int>dq;
        sort(tokens.begin(),tokens.end());
        for(int i=0;i<tokens.size();i++){
            dq.push_back(tokens[i]);
        }
        int score=0;
        int maxi=0;
        while(dq.size()>0){
            if(power>=dq.front()){
                score++;
                maxi=max(maxi,score);
                int ele=dq.front();
                power=power-ele;
                dq.pop_front();
            }
            else if(score>0){
                // if(score>0){
                score--;
                int ele=dq.back();
                power+=ele;
                dq.pop_back();
                // }
            }
            else{
                dq.pop_front();
            }
        }
        return maxi;
    }
};
