class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> sMap;
        map<char, int> tMap;
        
        if(s.size() != t.size()){
            return false;
        }
        
        for(int i = 0; i < s.size(); i++){
            sMap[s[i]]++;
            tMap[t[i]]++;
        }
        
        for(int i = 0; i < s.size(); i++){
            if(sMap[s[i]] != tMap[s[i]]){
                return false;
            }
        }
        
        return true;
    }
};