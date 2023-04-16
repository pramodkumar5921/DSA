class Solution {
public:
    int addMinimum(string word) {
        int n=word.size();
        int ans=0;
        int i=0;
        while(i<n){
            if(word[i]=='a'){
                if(i+1<n and word[i+1]=='b' and i+2<n and word[i+2]=='c'){
                    i=i+3;
                }
                else if(i+1<n and word[i+1]=='b' || word[i+1]=='c'){
                    i=i+2;
                    ans+=1;
                }
                else{
                    i++;
                    ans+=2;
                }
            }
            else if(word[i]=='b'){
                if(i+1<n and word[i+1]=='c'){
                    ans=ans+1;
                    i=i+2;
                }
                else{
                    ans+=2;
                    i++;
                }
            }
            else{
                ans+=2;
                i++;
            }
        }
        return ans;
    }
};
