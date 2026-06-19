class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> map;

        for(string s: strs){
            string sortedS=s;
            sort(sortedS.begin(), sortedS.end());

            map[sortedS].push_back(s);
        }

        for(auto item: map){
            result.push_back(item.second);
        }

        return result;    
    }
};
