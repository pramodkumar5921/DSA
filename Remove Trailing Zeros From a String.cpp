class Solution {
public:
    string removeTrailingZeros(string num) {
        stack<char>st;
        reverse(num.begin(),num.end());
        int cnt=num.size()-1;
        for(int i=0;i<num.size();i++){
            if(num[i]=='0'){
                cnt--;
               
            }
            else{
                break;
            }
        }
        string ans;
        reverse(num.begin(),num.end());
        for(int i=0;i<=cnt;i++){
            ans.push_back(num[i]);
        }
        return ans;
    }
};
