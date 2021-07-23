class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m;
        map<char, bool> sMap;
        map<char, bool> tMap;
        
        for(int i = 0; i < s.size(); i++){
            if(!sMap[s[i]] && !tMap[t[i]]){
                m[s[i]] = t[i];
                sMap[s[i]] = true;
                tMap[t[i]] = true;
            }
            else{
                if(m[s[i]] != t[i]){
                    return false;
                }
            }
        }
        
        return true;
    }
};