class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int n=digits.size();
        int transfer=1;

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
            result.resize(n+1, 1);
            for(int i=0;i<n;i++){
                result[i+1]=digits[i];
            }
        } else {
            return digits;
        }

        return result;    
    }
};
