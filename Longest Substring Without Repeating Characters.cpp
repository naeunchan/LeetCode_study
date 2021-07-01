class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        
        for(int i = 0; i < s.size(); i++){
            vector<bool> check(200, false);
            int sum = 0;
            
            for(int j = i; j < s.size(); j++){
                if(!check[s[j]]){
                    check[s[j]] = true;
                    sum++;
                }
                else{
                    break;
                }
            }
            ans = ans < sum ? sum : ans;
        }
        
        return ans;
    }
};