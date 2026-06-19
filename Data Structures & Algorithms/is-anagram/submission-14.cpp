#include <algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());

        #include <iostream>

        sort(t.begin(), t.end());

        return s==t;    
    }
};
