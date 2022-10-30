class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count=0;
        unordered_map<string,int>mp1;
        unordered_map<string,int>mp2;
        for(auto i:words1){
            mp1[i]++;
        }
        for(auto j:words2){
            mp2[j]++;
        }
        for(auto i:words1){
            if(mp1[i]==1 and mp2[i]==1){
                count++;
            }
        }
        return count;
    }
};
