class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0;
        while(i<s.size() and j<t.size()){
            while(i<s.size() and j<t.size() and s[i]==t[j]){
                i++;j++;
            }
            while(i<s.size() and s[i]!=t[j]){
                i++;
            }
        }
        return t.size()-j;
    }
};
