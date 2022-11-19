class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector< int>>ans;
        for(int line=1;line<=rowIndex+1;line++){
            vector< int>v;
             long long int value=1;
            for(  int i=1;i<=line;i++){
                v.push_back(value);
                value=value*(line-i)/i;
            }
            ans.push_back(v);
        }
        return ans[rowIndex];
    }
};
