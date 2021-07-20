class Solution {
public:
    int myAtoi(string s) {
        string answer = "";
        int index = 0;
        int length = s.size();
        int sign = 1;
        bool op = false;
        bool num = false;
        
        while(index < length && s[index] == ' '){
            index++;
        }
        
        for(int i = index; i < length; i++){
            if(s[i] == '-' || s[i] == '+'){
                if(!op && !num){
                    op = true;
                    
                    if(s[i] == '-'){
                        sign = -1;
                    }
                }
                else{
                    break;
                }
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                num = true;
                
                if(!answer.empty()){
                    int tmp = sign * stoi(answer);
                    
                    if(tmp > INT_MAX / 10 || tmp == INT_MAX / 10 && (s[i] - '0') > 7){
                        return INT_MAX;
                    }

                    if(tmp < INT_MIN / 10 || tmp == INT_MIN / 10 && (s[i] - '0') > 7){
                        return INT_MIN;
                    }
                }
                answer += s[i];
            }
            else{
                break;
            }
        }
        
        if(!answer.empty()){
            return sign * stoi(answer);
        }
        else{
            return 0;
        }
    }
};