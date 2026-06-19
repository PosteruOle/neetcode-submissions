#include <algorithm>
#include <unordered_map>


class Solution {
public:
    /*
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
    */

    bool isAnagram(string s, string t){
        int n=s.size();
        int m=s.size();

        if(n!=m){
            return false;
        }

        unordered_map<char, int> map;
        for(char c: s){
            map[c]++;
        }

        for(char c: t){
            if(map.find(c)==map.end()){
                return false;
            }

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
