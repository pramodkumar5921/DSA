class Solution {
public:
    int countSegments(string s) {
        int cnt=0;
        for(int i=0;i<s.size();){
          if(s[i]==' '){
              i++;
              continue;
          }
          else{
              while(s[i]!=' ' and i<s.size()){
                  i++;
              }
              cnt++;
          }  
        }
        return cnt;
    }
};
