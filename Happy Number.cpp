class Solution {
public:
    bool isHappy(int n) {
        map<int, bool> m;
        
        while(n){
            int num = 0;
            
            while(n){
                num += pow(n % 10, 2);
                n /= 10;
            }
            
            if(num == 1){
                return true;
            }
            else{
                if(!m[num]){
                    m[num] = true;
                    n = num;
                }
                else{
                    return false;
                }
            }
        }
        
        return true;
    }
};