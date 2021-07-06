class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        
        string answer = "";
        int pattern = 2 * numRows - 2;
        
        for(int i = 0; i < numRows; i++){
            for(int j = 0; i + j < s.size(); j += pattern){
                answer += s[i + j];
                
                if(i != 0 && i != numRows - 1 && j + pattern - i < s.size()){
                    answer += s[j + pattern - i];
                }
            }
        }
        
        return answer;
    }
};