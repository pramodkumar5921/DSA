class Solution {
public:
unordered_map<string,bool>dp;
    bool solve(string a,string b){
        // base case
        if(a.compare(b)==0){
            return true;
        }
        if(a.size()<=1){
            return 0;
        }
        string key;
        key=a+'#'+b;
        if(dp.find(key)!=dp.end()){
            return dp[key];
        }
        // recursive case
        bool flag=false;
        int n=a.size();
        for(int i=1;i<n;i++){
            bool case1=(solve(a.substr(0,i),b.substr(n-i,i)) and 
            solve(a.substr(i,n-i),b.substr(0,n-i)));
            bool case2=(solve(a.substr(0,i),b.substr(0,i)) and 
            solve(a.substr(i,n-i),b.substr(i,n-i)));
            if(case1 or case2){
                flag=true;
            }
        }
        return dp[key]=flag;
    }
    bool isScramble(string s1, string s2) {
        if(s1.size()-s2.size()){
            return false;
        }
        if(s1.empty() and s2.empty()){
            return true;
        }
        bool temp=solve(s1,s2);
        return temp;
    }
};
