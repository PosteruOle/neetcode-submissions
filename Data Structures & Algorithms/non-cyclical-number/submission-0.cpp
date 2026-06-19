class Solution {
public:
    int sumOfDigitsSquares(int n){
        int result=0;

        while(n){
            int digit=n%10;
            result+=digit*digit;
            n/=10;
        }

        return result;
    }

    bool isHappy(int n) {
        unordered_set<int> visited;

        while(n!=1){
            if(visited.find(n)!=visited.end()){
                break;
            }
            visited.insert(n);
            n=sumOfDigitsSquares(n);
        }    

        return n==1;
    }
};
