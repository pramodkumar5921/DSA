class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    unordered_map<int,int>mp;
    vector<int>arr;
    bool insert(int val) {
        if(mp.find(val)==mp.end()){
            arr.push_back(val);
            mp[val]=arr.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(mp.find(val)!=mp.end()){
           int idx_val=mp[val];
           int last_element=arr.back();
        //    int last_element=arr.size()-1;
           arr.pop_back();
           arr[idx_val]=last_element;
           mp[last_element]=idx_val;
           mp.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int idx=rand()%arr.size();
        return arr[idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
