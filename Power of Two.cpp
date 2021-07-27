class Solution {
public:
    bool isPowerOfTwo(int n) {
        map<int, bool> m;
        
        for(int i = 0; pow(2, i) <= INT_MAX; i++){
            m[pow(2, i)] = true;
        }
        
        if(m[n]){
            return true;
        }
        
        return false;
    }
};