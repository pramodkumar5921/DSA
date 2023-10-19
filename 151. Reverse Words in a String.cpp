class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans;
        int n=s.size();
        int i=0,j=0;
        while(i<s.size()){
            while(j<n and s[j]==' '){
                j++;
            }
            string temp;
            while(j<n and s[j]!=' '){
                temp+=s[j];
                j++;
            }
            if(temp.size()>0){
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=' ';
            }
            
            i=j;
        }
        ans.pop_back();
        return ans;
    }
};
