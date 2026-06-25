class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int n=digits.size();
        int transfer=1;

        if(digits.empty()){
            return {1};
        }

        for(int i=n-1;i>=0;i--){
            if(transfer==0){
                break;
            }

            if(digits[i]<9){
                digits[i]++;
                transfer=0;
                break;
            } else {
                digits[i]=0;
                transfer=1;
            }
        }

        if(transfer){
            result.resize(n+1, 0);
            result[0]=1;
        } else {
            return digits;
        }

        return result;    
    }
};
