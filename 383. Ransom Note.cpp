class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(int i=0;i<magazine.size();i++){
            mp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            char key=ransomNote[i];
            if(mp.find(key)!=mp.end() and mp[key]>0){
                while(mp[key]>0){
                    mp[key]--;
                    break;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};
