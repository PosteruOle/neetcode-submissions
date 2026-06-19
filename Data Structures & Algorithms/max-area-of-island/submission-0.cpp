class Solution {
public:
    int max_area=0;
    int tmp_area=0;
    void dfs(vector<vector<int>>& grid, int p, int q){
        int n=grid.size();
        int m=grid[0].size();
        if(p<0 || p>=n || q<0 || q>=m){
            return;
        }
        if(grid[p][q]==1){
            grid[p][q]=2;
            tmp_area++;
            dfs(grid, p+1, q);
            dfs(grid, p-1, q);
            dfs(grid, p, q+1);
            dfs(grid, p, q-1);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    tmp_area=0;
                    dfs(grid, i, j);
                    if(tmp_area>max_area){
                        max_area=tmp_area;
                    }
                }    
            }
        }
        return max_area;
    }
};
