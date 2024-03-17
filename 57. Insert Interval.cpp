class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        int n=intervals.size();
        for(int i=1;i<n;i++){
            int a=ans[ans.size()-1][0];
            int b=ans[ans.size()-1][1];
            int c=intervals[i][0];
            int d=intervals[i][1];
            if(b>=c){
                ans.pop_back();
                vector<int>temp;
                temp.push_back(a);
                int cnt=max({b,c,d});
                temp.push_back(cnt);
                ans.push_back(temp);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};
