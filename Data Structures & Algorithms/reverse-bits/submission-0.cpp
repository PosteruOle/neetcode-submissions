class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result=0;
        uint32_t mask1=1;
        uint32_t mask2=1<<(sizeof(uint32_t)*8-1);
        for(int i=1;i<=sizeof(uint32_t)*8;i++){
            if((mask1 & n)){
                result|=mask2;
            }
            mask1<<=1;
            mask2>>=1; 
        }

        return result;
    }
};
