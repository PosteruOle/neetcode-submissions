class Solution {
public:
    int result=0;

    void dfs(vector<vector<int>>& grid, int i, int j, int& current){
        int n=grid.size();
        int m=grid[0].size();

        if(i<0 || j<0 || i>=n || j>=m){
            return;
        }

        if(grid[i][j]==0 || grid[i][j]==2){
            return;
        }

        grid[i][j]=2;
        current++;
        result=max(result, current);

        dfs(grid, i+1, j, current);
        dfs(grid, i-1, j, current);
        dfs(grid, i, j+1, current);
        dfs(grid, i, j-1, current);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int current;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    current=0;
                    dfs(grid, i, j, current);
                }
            }
        } 

        return result;   
    }
};