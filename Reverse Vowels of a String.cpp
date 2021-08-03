class Solution {
public:
    bool check(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            return true;
        }
        
        return false;
    }
    
    string reverseVowels(string s) {
        string answer = s;
        int front = 0, back = s.size() - 1;
        
        while(front <= back){
            while(front < back && !check(answer[front])){
                front++;
            }
            
            while(back > front && !check(answer[back])){
                back--;
            }
            
            swap(answer[front], answer[back]);
            front++;
            back--;
        }
        
        return answer;
    }
};