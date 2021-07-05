class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size(), start = 0, end = 0;
        
        if(size == 0){
            return "";
        }
        
        for(int mid = 0; mid < s.size(); mid++){
            int l1 = getLength(mid, mid, s);
            int l2 = getLength(mid, mid + 1, s);
            
            if(l1 > end - start){
                start = mid - l1 / 2;
                end = mid + l1 / 2;
            }
            
            if(l2 > end - start){
                start = mid + 1 - l2 / 2;
                end = mid + l2 / 2;
            }
        }
        
        return s.substr(start, end - start + 1);
    }
    
    int getLength(int left, int right, string s){
        int len = 0;
        
        while(left >= 0 && right < s.size()){
            if(s[left] == s[right]){
                len = right - left + 1;
                left--;
                right++;
            }
            else{
                break;
            }
        }
        
        return len;
    }
};