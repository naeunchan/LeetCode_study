class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> check(26, 0);
        
        for(int i = 0; i < magazine.size(); i++){
            check[magazine[i] - 'a']++;
        }
        
        for(int i = 0; i < ransomNote.size(); i++){
            if(check[ransomNote[i] - 'a']-- <= 0){
                return false;
            }
        }
        
        return true;
    }
};