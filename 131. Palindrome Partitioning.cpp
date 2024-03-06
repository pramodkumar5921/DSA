class Solution {
public:
    bool Panlindrome(int i,int j,string &s){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
    vector<vector<string>>result;
    void AllPanlindrome(string &s,int idx,vector<string>&temp){
        int n=s.size();
        if(idx==n){
            result.push_back(temp);
            return;
        }
        for(int k=idx;k<n;k++){
            if(Panlindrome(idx,k,s)==true){
                string ans=s.substr(idx,k-idx+1);
                temp.push_back(ans);
                AllPanlindrome(s,k+1,temp);
                temp.pop_back();
            }

        }
        return;
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        AllPanlindrome(s,0,temp);
        return result;
    }
};
