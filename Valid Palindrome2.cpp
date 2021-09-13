class Solution {
public:
    bool checkPalindrome(int front, int back, string s){
        while(front <= back){
            if(s[front++] != s[back--]){
                return false;
            }
        }
        
        return true;
    }
    
    bool validPalindrome(string s) {
        bool isDeleted = false;
        int front = 0;
        int back = s.size() - 1;
        
        while(front <= back){
            if(s[front] != s[back]){
                return checkPalindrome(front + 1, back, s) || checkPalindrome(front, back - 1, s);
            }
            
            front++;
            back--;
        }
        
        return true;
    }
};