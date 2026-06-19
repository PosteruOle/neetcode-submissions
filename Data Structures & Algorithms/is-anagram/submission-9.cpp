class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;

        for(char c: s){
            map[c]++;
        }

        for(char c: t){
            map[c]--;
        }

        for(auto item: map){
            if(item.second!=0){
                return false;
            }
        }

        return true;
    }
};
