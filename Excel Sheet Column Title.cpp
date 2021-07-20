class Solution {
public:
    string convertToTitle(int columnNumber) {
        string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string answer ="";
        
        while(columnNumber){
            int r = (columnNumber - 1) % 26;
            
            answer = alphabet[r] + answer;
            
            columnNumber = (columnNumber - 1) / 26;
        }
        
        return answer;  
    }
};