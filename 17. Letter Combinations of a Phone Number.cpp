class Solution {
public:
    void solve(vector<string>&result,string&temp,unordered_map<char,string>&mp,int idx,string &digits){
        // base case
        int n=digits.size();
        if(idx>=n){
            result.push_back(temp);
            return ;
        }
        char ch=digits[idx];
        string str=mp[ch];
        for(int i=0;i<str.size();i++){
            temp.push_back(str[i]);
            solve(result,temp,mp,idx+1,digits);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        string temp;
        vector<string>result;
        if(digits.size()==0){
            return result;
        }
        solve(result,temp,mp,0,digits);
        return result;
    }
};
