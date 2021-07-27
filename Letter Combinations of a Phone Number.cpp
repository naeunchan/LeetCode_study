class Solution {
public:
    string str[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> answer;
    
    void dfs(string s, string digits, int n){
        int number = digits[n] - '0';
        
        if(digits.size() - 1 == n){
            for(int i = 0; i < str[number].size(); i++){
                answer.push_back(s + str[number][i]);
            }
            return;
        }
        
        for(int i = 0; i < str[number].size(); i++){
            string tmp = s + str[number][i];
            
            dfs(tmp, digits, n + 1);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<int> numbers;
        
        if(digits != ""){
            dfs("", digits, 0);
        }
        
        return answer;
    }
};