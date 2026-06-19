class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> map;
        int maxFrequency=0;
        int result=0;
        int left=0;
        int n=s.size();

        for(int r=0;r<n;r++){
            map[s[r]]++;
            maxFrequency=max(maxFrequency, map[s[r]]);

            while((r-left+1)-maxFrequency>k){
                map[s[left]]--;
                left++;
            }

            result=max(result, r-left+1);
        }


        return result;
    }
};
