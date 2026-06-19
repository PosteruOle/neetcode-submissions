class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> map(26, 0);

        if(s.size()!=t.size()){
            return false;
        }

        for(char c: s){
            map[c-'a']++;
        }

        for(char c: t){
            map[c-'a']--;
        }

        for(int element: map){
            if(element!=0){
                return false;
            }
        }

        return true;
    }
};
