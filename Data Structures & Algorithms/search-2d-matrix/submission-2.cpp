class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            if(matrix[i][m-1]<target){
                continue;
            } else {
                int l=0;
                int r=m-1;
                int s;
                
                while(l<=r){
                    s=l+(r-l)/2;

                    if(matrix[i][s]==target){
                        return true;
                    } else if(matrix[i][s]<target){
                        l=s+1;
                    } else {
                        r=s-1;
                    }
                }
            }
        }

        return false;
    }
};
