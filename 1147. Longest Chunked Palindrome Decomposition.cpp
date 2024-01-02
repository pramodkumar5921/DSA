class Solution {
public:
    int longestDecomposition(string text) {
        int i=0,j=text.size()-1;
        string a="",b="";
        int ans=0;
        while(i<j){
            a=a+text[i];
            b=text[j]+b;
            if(a==b){
                ans++;
                a="";
                b="";
            }
            i++;j--;
        }
        ans=ans*2;
        if(ans==0){
            return 1;
        }
        if(i>j and a==""){
            return ans;
        }
        return ans+1;
    }
};
