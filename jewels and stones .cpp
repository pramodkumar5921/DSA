class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        unordered_map<char,int>mp;
        for(int i=0;i<stones.size();i++){
            mp[stones[i]]++;
        }
        unordered_set<char>s;
        for(int i=0;i<jewels.size();i++){
            s.insert(jewels[i]);
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            char key=it->first;
            if(s.find(key)!=s.end()){
                ans=ans+it->second;
            }
        }
        return ans;
    }
};
