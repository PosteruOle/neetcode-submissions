class Solution {
public:
    int result=0;

    int dfs(vector<vector<int>>& grid, int i, int j){
        int n=grid.size();
        int m=grid[0].size();

        if(i<0 || j<0 || i>=n || j>=m){
            return 0;
        }

        if(grid[i][j]==0 || grid[i][j]==2){
            return 0;
        }

        grid[i][j]=2;
        int area = 1;

        area += dfs(grid, i+1, j);
        area += dfs(grid, i-1, j);
        area += dfs(grid, i, j+1);
        area += dfs(grid, i, j-1);
        
        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    result = max(result, dfs(grid, i, j));
                }
            }
        } 

        return result;   
    }
};