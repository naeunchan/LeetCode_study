class Solution {
public:
    int titleToNumber(string columnTitle) {
        int answer = 0;
        int length = columnTitle.size() - 1;
        
        for(int i = length; i >= 0; i--){
            int n = columnTitle[i] - 'A' + 1;
            
            answer += pow(26, length - i) * n;
        }
        
        return answer;
    }
};