class Solution {
public:


    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        // int n;
     vector<int>dr={-1,0,1,0};
    vector<int>dc={0,1,0,-1};
  
    dist[0][0] = 0;
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;

    q.push({0, {0, 0}});
    
    while (!q.empty()) {
        auto current = q.top();
        q.pop();
        
        int dis = current.first;
        int row = current.second.first;
        int col = current.second.second;

        if (row == n - 1 && col == m - 1) {
            // Update distance matrix and return when reaching destination
            return dis;
        }

        for (int i = 0; i < 4; ++i) {
            int nr = row + dr[i];
            int nc = col + dc[i];

            if (nr >= 0 && nc >= 0 && nr < n && nc < m) {
                int new_effort = max(abs(heights[nr][nc] - heights[row][col]), dis);

                if (new_effort < dist[nr][nc]) {
                    dist[nr][nc] = new_effort;
                    q.push({new_effort, {nr, nc}});
                }
            }
        }
    }

        return dist[n-1][m-1];
    }
};
