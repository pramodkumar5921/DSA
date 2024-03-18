class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        vector<int>prev=points[0];
        int n=points.size();
        int ans=0;
        for(int i=1;i<n;i++){
            int currFirst=points[i][0];
            int currSecond=points[i][1];
            int prevFirst=prev[0];
            int prevSecond=prev[1];

            if(currFirst>prevSecond){
                ans=ans+1;
                prev=points[i];
            }
            else{
                prev[0]=max(prevFirst,currFirst);
                prev[1]=min(currSecond,prevSecond);
            }
        }
        return ans+1;
    }
};
