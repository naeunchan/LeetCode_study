class Solution {
public:
    int lengthOfLastWord(string s) {
        string token;
        stringstream ss(s);
        vector<string> str;
        
        while(ss >> token){
            str.push_back(token);
        }
        
        if(str.empty()){
            return 0;
        }
        else{
            return str.back().size();
        }
    }
};