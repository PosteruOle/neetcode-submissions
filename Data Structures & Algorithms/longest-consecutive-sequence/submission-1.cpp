class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int result=0;

        for(int item: set){
            if(set.find(item-1)==set.end()){
                int length=1;
                
                while(set.find(item+length)!=set.end()){
                    length++;
                }

                result=max(result, length);
            }
        }

        return result;
    }
};
