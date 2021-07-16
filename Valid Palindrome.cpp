class Solution {
public:
    bool isPalindrome(string s) {
        string tmp = "";
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        for(int i = 0; i < s.size(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                tmp += s[i];
            }
        }
        
        int front = 0;
        int back = tmp.size() - 1;
        
        while(!tmp.empty() && front <= back){
            if(tmp[front++] != tmp[back--]){
                return false;
            }
        }
        
        return true;
    }
};