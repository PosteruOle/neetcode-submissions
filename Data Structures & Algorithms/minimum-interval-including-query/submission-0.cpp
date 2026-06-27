class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        vector<int> result;

        for(int query: queries){
            int current=-1;

            for(vector<int> interval: intervals){
                int left=interval[0];
                int right=interval[1];

                if((left<=query && query<=right) && (current==-1 || current>(right-left)+1)){
                    current=right-left+1;
                }
            }

            result.push_back(current);
        }


        return result;    
    }
};
