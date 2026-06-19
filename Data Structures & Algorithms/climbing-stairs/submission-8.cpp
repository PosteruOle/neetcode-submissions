class Solution {
public:
    int climbStairs(int n) {
        int one=1;
        int two=2;
        int current;

        if(n<=2){
            return n;
        }

        for(int i=3;i<=n;i++){
            current=one+two;
            one=two;
            two=current;
        }

        return current;
    }
};
