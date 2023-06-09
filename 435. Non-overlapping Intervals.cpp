class Solution {
public:
     static bool compare1(const pair<int,int>a, const pair<int,int>b){
        if(a.second<b.second){
            return true;
        }
        if(a.second==b.second){
            return a.first<b.first;
        }
        return false;
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<pair<int,int>>temp(n);
        for(int i=0;i<n;i++){
            temp[i].first=intervals[i][0];
            temp[i].second=intervals[i][1];
        }
        sort(temp.begin(),temp.end(),compare1);
        int lastend=temp[0].second;
        int cnt=0;
        for(int i=1;i<n;i++){
            int end=temp[i].second;
            int start=temp[i].first;
            if(lastend>start){
                cnt++;
            }
            else if(lastend<=start){
                lastend=end;
            }
        }
        return cnt;
    }
};
