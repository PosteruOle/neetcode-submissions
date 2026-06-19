class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mapS;
        unordered_map<char, int> mapT;
        int n=s.size();

        if(s.size()!=t.size()){
            return false;
        }

        for(int i=0;i<n;i++){
            mapS[s[i]]++;
            mapT[t[i]]++;
        }

        return mapS==mapT;
    }
};
