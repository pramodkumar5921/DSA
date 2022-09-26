class Solution {
public:
    // to store the vector of ans
    vector<vector<string>>ans;
    vector<vector<string>> partition(string s) {
        vector<string>curr_ans;
        solve(s,curr_ans,0);
        return ans;
    }
    // another function 
        void solve(string &s,vector<string> &curr_ans,int start){
        // basecase
        if(start==s.length()){
            ans.push_back(curr_ans);
        }
        
        // recursion case
        for(int end=start;end<=s.length();end++){
            string merewali=s.substr(start,end-start+1);
            if(palindrome(merewali)==true){
                curr_ans.push_back(merewali);
                solve(s,curr_ans,end+1);
                curr_ans.pop_back();// backtracing 
            }
        }
            
    }
        bool palindrome(string s){
            int i=0;int j=s.length()-1;
            while(i<j){
                if(s[i]!=s[j]){
                    return false;
            }
             i++;j--;
            }
            return true;
            }
           
};
