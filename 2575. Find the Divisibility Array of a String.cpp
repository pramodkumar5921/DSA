class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>ans;
        long long int rem=0;
        for(int i=0;i<word.size();i++){
            long long int val=rem*10+(word[i]-'0');
            // val=val%m;
            if(val%m==0){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
            rem=val%m;
        }
        return ans;
    }
};
