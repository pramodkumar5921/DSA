class Solution {
public:
    string getHint(string secret, string guess) {
      int bull=0;
      vector<int>s(10,0),g(10,0);
      for(int i=0;i<guess.size();i++){
          if(secret[i]==guess[i]){
              bull++;
          }
          else{
              s[secret[i]-'0']++;
              g[guess[i]-'0']++;
          }
      }
      int cow=0;
      for(int i=0;i<=9;i++){
        cow=cow+min(s[i],g[i]);
      }
      string ans="";
      ans=ans+to_string(bull)+"A"+to_string(cow)+"B";
      return ans;
    }
};
