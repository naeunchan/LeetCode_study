class Solution {
public:
    int mySqrt(int x) {
        long long answer = 1;
        
        while(1){
            if(answer * answer == x){
                return answer;
            }
            else if(answer * answer > x){
                break;
            }
            answer++;
        }
        
        return answer - 1;
    }
};