class Solution {
public:
    void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<int>>& vis) {
         int n=grid.size();
        int m=grid[0].size();
        vis[r][c]=1;
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};

        for(int i=0;i<4;i++){
            int nrow=drow[i]+r;
            int ncol=dcol[i]+c;
            if(nrow>=0 && ncol>=0 && nrow<n && ncol<m
               && !vis[nrow][ncol] && grid[nrow][ncol]=='1'){
                vis[nrow][ncol]=1;
                dfs(nrow,ncol,grid,vis);
               }
        }
      
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int island=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(i,j,grid,vis);
                    island++;
                }
            }
        }
        return island;
    }
};