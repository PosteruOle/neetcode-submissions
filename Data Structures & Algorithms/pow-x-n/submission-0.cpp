class Solution {
public:
    double myPow(double x, int n) {
        double result=1;

        for(int i=1;i<=abs(n);i++){
            result*=x;
        }

        if(n<0){
            result=1/result;
        }

        return result;  
    }
};
