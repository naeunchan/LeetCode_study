class Solution {
public:
    
    string addBinary(string a, string b) {
        string answer = "";
        int aIndex = a.size() - 1;
        int bIndex = b.size() - 1;
        int carry = 0;
        
        while((aIndex != -1 || bIndex != -1) || carry){
            if(aIndex >= 0){
                carry += a[aIndex--] == '1' ? 1 : 0;
            }
            if(bIndex >= 0){
                carry += b[bIndex--] == '1' ? 1 : 0;
            }
            
            answer = to_string(carry % 2) + answer;
            carry /= 2;
        }
        
        return answer;
    }
};