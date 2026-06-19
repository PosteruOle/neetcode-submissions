class Solution {
public:
    void traversal(vector<vector<char>>& grid, int p, int q){
        int n=grid.size();
        int m=grid[0].size();
        if(p<0 || p>=n || q<0 || q>=m){
            return;
        }
        if(grid[p][q]=='1'){
            grid[p][q]='2';
            traversal(grid, p+1, q);
            traversal(grid, p-1, q);
            traversal(grid, p, q+1);
            traversal(grid, p, q-1);
        } 
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    traversal(grid, i, j);
                }    
            }
        }

        return count;
    }
};
