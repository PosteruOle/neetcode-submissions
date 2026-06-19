class Solution {
public:
    bool dfs(vector<vector<char>> matrix, int p, int q, int k, string word){
        int n=matrix.size();
        int m=matrix[0].size();
        
        if(p<0 || q<0 || p>=n || q>=m){
            return false;
        }
        
        if(k>=word.size()){
            return false;
        }
        
        if(matrix[p][q]=='!'){
            return false;
        }

        if(matrix[p][q]!=word[k]){
            return false;
        }

        if(k==word.size()-1){
            return true;
        }

        matrix[p][q]='!';

        bool flag=dfs(matrix, p+1, q, k+1, word);
        if(flag){
            return true;
        }
        
        flag=dfs(matrix, p-1, q, k+1, word);
        if(flag){
            return true;
        }
        
        flag=dfs(matrix, p, q+1, k+1, word);
        if(flag){
            return true;
        }
        
        return dfs(matrix, p, q-1, k+1, word);
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dfs(board, i, j, 0, word)){
                    return true;
                }
            }
        }

        return false;    
    }
};
