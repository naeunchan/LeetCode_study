class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool check = false;
        
        for(int i = digits.size() - 1; i >= 0; i--){
            if(!check){
                if(digits[i] == 9){
                    digits[i] = 0;
                    
                    if(i == 0){
                        digits.insert(digits.begin(), 1);
                    }
                }
                else{
                    digits[i]++;
                    check = true;
                }
            }
            else{
                break;
            }
        }
        
        return digits;
    }
};