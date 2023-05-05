class Solution {
public:
    int maxVowels(string s, int k) {
        string str="aeiou";
        unordered_map<char,int>mp;
        for(auto it:str){
            mp[it]++;
        }
        int v=0,maxi=INT_MIN;
        int i=0,j=0;int cnt=0;
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                v++;
            }
            if(j-i+1==k){
                maxi=max(maxi,v);
                if(mp.find(s[i])!=mp.end()){
                    if(v>0){
                        v--;
                    }
                    else{
                        v=0;
                    }
                }
                i++;
            }
            j++;
        }
        return maxi;
    }
};
