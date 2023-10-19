class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    vector<int>res;
    unordered_map<int,int>mp;
    bool insert(int val) {
       if(mp.find(val)!=mp.end()){
           return false;
       }
        res.push_back(val);
        mp[val]=res.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end()){
            return false;
        }
        int it=mp[val];
        int last=res.back();
        res[it]=last;
        res.pop_back();
        mp[last]=it;
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
       int it=rand()%res.size();
        return res[it];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
