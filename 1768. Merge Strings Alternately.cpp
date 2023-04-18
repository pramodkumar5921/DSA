class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        if(word1.size()<1){
            return word2;
        }
        string ans;
        int i=0,j=0;
        while(i<word1.size() and j<word2.size()){
            if(i==j){
                ans+=word1[i];
                i++;
            }
            if(j<i){
                ans+=word2[j];
                j++;
            }
        }
        while(i<word1.size()){
            ans+=word1[i];
            i++;
        }
        while(j<word2.size()){
            ans+=word2[j];
            j++;
        }
        return ans;
    }
};
