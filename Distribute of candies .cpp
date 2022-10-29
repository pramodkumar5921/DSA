class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(candyType[i]);
        }
        if(st.size()<n/2){
            return st.size();
        }
        return n/2;
    }
};
