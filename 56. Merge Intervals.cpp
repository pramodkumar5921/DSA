class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<pair<int,int>>temp(n);
        for(int i=0;i<n;i++){
            temp[i].first=intervals[i][0];
            temp[i].second=intervals[i][1];
        }
        vector<vector<int>>ans;
        sort(temp.begin(),temp.end());
        int start=temp[0].first;
        int last=temp[0].second;
        for(int i=1;i<n;i++){
            int x=temp[i].first;
            int y=temp[i].second;
            vector<int>v;
            if(last<x){
                v.push_back(start);
                v.push_back(last);
                ans.push_back(v);
                start=x;
                last=y;
            }
            else{
                start=min(start,x);
                last=max(last,y);
            }
        }
        ans.push_back({start,last});
        return ans;
    }
};
