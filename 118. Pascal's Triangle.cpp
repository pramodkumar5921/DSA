class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        for(int line=1;line<=numRows;line++){
            vector<int>lines;
            int value=1;
            // lines.push_back(value);
            for(int i=1;i<=line;i++){
                lines.push_back(value);
                value=value*(line-i)/i;
            }
            res.push_back(lines);
        }
        return res;
    }
};
