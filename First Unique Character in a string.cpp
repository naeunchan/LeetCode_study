class Solution {
public
    int firstUniqChar(string s) {
        vectorvectorint check(26);
        
        for(int i = 0; i  s.size(); i++){
            check[s[i] - 'a'].push_back(i);
        }
        
        for(int i = 0; i  s.size(); i++){
            if(check[s[i] - 'a'].size() == 1){
                return check[s[i] - 'a'][0];
            }
        }
        
        return -1;
    }
};