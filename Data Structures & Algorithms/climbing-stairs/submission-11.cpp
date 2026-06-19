class Solution {
public:
    int climbStairs(int n) {
        vector<int> cache(n, -1);
        int result=dfs(n, 0, cache);

        return result;    
    }

    int dfs(int n, int i, vector<int> &cache){
        if(i>n){
            return 0;
        }

        if(i==n){
            return 1;
        }

        if(cache[i]!=-1){
            return cache[i];
        }

        cache[i]=dfs(n, i+1, cache)+dfs(n, i+2, cache);

        return cache[i];
    }
};
