class Solution {
public:
    vector<int>v;

   
    Solution(vector<int>& w) {
        v.push_back(w[0]);
        for(int i=1;i<w.size();i++){
        
        v.push_back(w[i]+v[i-1]);
       } 

    }
    
    int pickIndex() {
        int pref_weight=rand()%v.back();
        int ind=upper_bound(v.begin(),v.end(),pref_weight)-v.begin();
        return ind;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
