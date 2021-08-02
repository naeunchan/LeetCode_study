class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string, char> m;
        string token;
        vector<string> v;
        stringstream ss(s);
        int index = 0;
        vector<bool> check(26, false);
        
        while(ss >> token){
            if(m.find(token) == m.end() && !check[pattern[index] - 'a']){
                m[token] = pattern[index];
                check[pattern[index] - 'a'] = true;
            }
            else{
                if(m[token] != pattern[index]){
                    return false;
                }
            }
            index++;
        }
        
        if(index < pattern.size()){
            return false;
        }
        
        return true;
    }
};