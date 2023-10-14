class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        for(int i=0;i<n;i++){
            if(i==0 or (groups[i]!=groups[i-1])){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
