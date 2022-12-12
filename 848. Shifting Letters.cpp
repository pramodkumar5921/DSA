class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long int sum=0;
        for(int i=0;i<shifts.size();i++){
            sum+=shifts[i];
        }
        for(int i=0;i<shifts.size();i++){
            
            if(s[i]+sum>122){
              int sh=sum%26;
              s[i]='a'+((s[i]+sh)-'a')%26 ;
            }
            else{
                s[i]=s[i]+sum;
            }
            sum-=shifts[i];
        }
        return s;
    }
};
