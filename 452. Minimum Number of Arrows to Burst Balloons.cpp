class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans=0;
        priority_queue< pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        for(int i=0;i<points.size();i++){
            pair<int,int>p=make_pair(points[i][0],points[i][1]);
            pq.push(p);
        }
        pair<int,int>t=pq.top();
        pq.pop();
        ans++;
        while(pq.size()>0){
            pair<int,int>p=pq.top();
            pq.pop();
            int mn=max(t.first,p.first);
            int mx=min(t.second,p.second);
            if(mn<=mx){
                t.first=mn;
                t.second=mx;
                continue;
            }
            else{
                ans++;
                t=p;
            }
        }
        return ans;

    }
};
