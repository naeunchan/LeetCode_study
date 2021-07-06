class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";
        
        sort(strs.begin(), strs.end());
        
        for(int i = 0; i < strs[0].size(); i++){
            string prefix = strs[0].substr(0, i + 1);
            bool check = true;
            
            for(int j = 1; j < strs.size(); j++){
                if(strs[j].substr(0, i + 1) != prefix){
                    check = false;
                    break;
                }
            }
            
            if(check){
                answer = prefix;
            }
        }
        
        return answer;
    }
};