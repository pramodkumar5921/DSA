class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int l=1;l<=(n/2);l++){
            string res=s.substr(0,l);
            int i=l;
            bool flag=false;
            while(i<n){
            string str=s.substr(i,l);
             if(res!=str){
                 flag=true;
                break;
            }
            i=i+l;
          }
           if(flag==false){
               return true;
           }
        }
        return false; 
    }
};
