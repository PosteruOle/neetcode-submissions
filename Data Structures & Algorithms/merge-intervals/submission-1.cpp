class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());
        
        result.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=result[result.size()-1][1]){
                result[result.size()-1][1]=max(intervals[i][1], result[result.size()-1][1]);
            } else {
                result.push_back(intervals[i]);
            }
        }

        return result;    
    }
};
