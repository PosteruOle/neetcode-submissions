class Solution {
public:
    vector<int> cache;

    int climbStairs(int n) {
        cache.resize(n, -1);

        return dfs(n, 0);
    }

    int dfs(int n, int p){
        if(p>n){
            return 0;
        }
        
        if(p==n){
            return 1;
        }

        if(cache[p]!=-1){
            return cache[p];
        }

        cache[p]=dfs(n, p+1)+dfs(n, p+2);

        return cache[p];
    }
};
