class Solution {
public:
    int getSum(int a, int b) {
        int result=0;
        int mask=1;
        bool transfer=false;
        for(int i=1;i<=sizeof(int)*8;i++){
            if((a & mask) && (b & mask)){
                if(transfer){
                    result|=mask;
                } else {
                    transfer=true;
                }
            } else if(!(a & mask) && !(b & mask)){
                if(transfer){
                    result|=mask;
                    transfer=false;
                }
            } else {
                if(!transfer){
                   result|=mask; 
                }
            }
            mask<<=1;
        }

        return result;
    }
};
