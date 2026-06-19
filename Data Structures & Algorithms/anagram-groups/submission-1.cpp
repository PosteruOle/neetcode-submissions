#include <algorithm>
#include <map>
#include <unordered_map>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> result;
        unordered_map<string, vector<string>> map;

        for(int i=0;i<n;i++){
            string help=strs[i];
            sort(help.begin(), help.end());
            map[help].push_back(strs[i]);
        }

        for(auto item: map){
            result.push_back(item.second);
        }


        return result;    
    }
};
