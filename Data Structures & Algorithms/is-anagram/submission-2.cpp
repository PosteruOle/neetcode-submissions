#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<char, int> map;

        if(n!=m){
            return false;
        }

        for(int i=0;i<n;i++){
            if(map.find(s[i])==map.end()){
                map[s[i]]=1;
            } else {
                map[s[i]]++;
            }
        }

        for(int i=0;i<n;i++){
            if(map.find(t[i])==map.end()){
                return false;
            } else {
                map[t[i]]--;
            }
        }

        for(auto it: map){
            if(it.second!=0){
                return false;
            }
        }

        return true;
    }
};
