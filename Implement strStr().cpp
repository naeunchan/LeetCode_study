class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == ""){
            return 0;
        }
        
        int len = needle.size();
        int answer = -1;
        
        for(int i = 0; i < haystack.size(); i++){
            string current = haystack.substr(i, len);
            
            if(current == needle){
                answer = i;
                break;
            }
        }
        
        return answer;
    }
};