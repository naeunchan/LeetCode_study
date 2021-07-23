class Solution {
public:
    int countPrimes(int n) {
        int answer = 0;
        vector<bool> prime(5000001, false);
        
        for(int i = 2; i < n; i++){
            if(!prime[i]){
                answer++;
                for(int j = i + i; j < n; j += i){
                    prime[j] = true;
                }
            }
        }
        
        return answer;
    }
};