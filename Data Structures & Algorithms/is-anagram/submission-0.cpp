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
            map[s[i]]++;
        }
        
        for(int i=0;i<n;i++){
            map[t[i]]--;
            if(map[t[i]]<0){
                return false;
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
