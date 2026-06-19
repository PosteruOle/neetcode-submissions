#include <unordered_set>

class Solution {
public:
    int check(string s, int p){
        unordered_set<char> set;
        int result=0;
        int n=s.size();

        for(int i=p;i<n;i++){
            if(set.find(s[i])==set.end()){
                set.insert(s[i]);
                result++;
            } else {
                break;
            }
        }

        return result;
    }

    int lengthOfLongestSubstring(string s) {
        int result=0;
        int n=s.size();

        for(int i=0;i<n;i++){
            int current_result=check(s, i);

            result=max(result, current_result);
        }

        return result;    
    }
};
