class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<pair<int, int>, int>> q;
        int vis[n][m];
        // it stores like {{r,c},t} row column and time into the queue which are
        // rotten
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                } else {
                    vis[i][j] = 0;
                }
            }
        } // now the queue has all the rotten oranges in the bgining

        int time = 0;
        int drow[4] = {-1, 0, +1, 0};
        int dcol[4] = {0, +1, 0, -1};
        while (!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second; // it stores like {{r,c},t}
            q.pop();
            time = max(time, t);
            for (int i = 0; i < 4; i++) {
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                if (nrow < n && ncol < m && nrow >= 0 && ncol >= 0 &&
                    vis[nrow][ncol] != 2 && grid[nrow][ncol] == 1) {
                    q.push({{nrow, ncol}, t + 1});
                    vis[nrow][ncol] = 2;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(vis[i][j] !=2 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        return time;
    }
};