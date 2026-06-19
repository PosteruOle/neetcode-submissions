class Solution {
public:
    int check_for_min_height(vector<int>& heights, int p, int q){
        int result=heights[p];

        for(int i=p;i<=q;i++){
            result=min(result, heights[i]);
        }
        
        return result;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int result=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int min_heights=check_for_min_height(heights, i, j);
                result=max(min_heights*(j-i+1), result);
            }
        }

        return result;    
    }
};
