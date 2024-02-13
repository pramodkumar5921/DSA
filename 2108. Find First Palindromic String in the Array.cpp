class Solution {
public:
    bool ispalindrome(int i,int j,string &str){
        if(i>=j){
            return true;
        }
        if(str[i]==str[j]){
            if(ispalindrome(i+1,j-1,str)){
                return true;
            }
        }
        return false;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(ispalindrome(0,words[i].size()-1,words[i])==true){
                return words[i];
            }
        }
        return "";
    }
};
