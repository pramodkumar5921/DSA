class Solution {
public:
    int romanToInt(string s) {
        string temp="IVXLCDM";
        unordered_map<char,int>mp;
        for(int i=0;i<temp.size();i++){
            if(temp[i]=='I'){
                mp[temp[i]]=1;
            }
            if(temp[i]=='V'){
                mp[temp[i]]=5;
            }
            if(temp[i]=='X'){
                mp[temp[i]]=10;
            }
            if(temp[i]=='L'){
                mp[temp[i]]=50;
            }
            if(temp[i]=='C'){
                mp[temp[i]]=100;
            }
            if(temp[i]=='D'){
                mp[temp[i]]=500;
            }
            if(temp[i]=='M'){
                mp[temp[i]]=1000;
            }
        }
        int ans=0;
        for(int i=1;i<=s.size();i++){
            char key1=s[i-1];
            char key2=s[i];
            if(mp[s[i-1]]>=mp[s[i]]){
                ans+=mp[s[i-1]];
            }
            else{
                ans-=mp[s[i-1]];
            }
        }
        return ans;
    }
};
