class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t answer = 0;
        uint32_t pow = 31;
        
        while(n != 0){
            answer += (n & 1) << pow;
            n >>= 1;
            pow--;
        }
        
        return answer;
    }
};