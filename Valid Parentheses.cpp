class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        
        for(int i = 0; i < s.size(); i++){
            if(stk.empty()){
                stk.push(s[i]);
            }
            else{
                if(s[i] == ')'){
                    if(stk.top() == '('){
                        stk.pop();
                    }
                    else{
                        stk.push(s[i]);
                    }
                }
                else if(s[i] == '}'){
                    if(stk.top() == '{'){
                        stk.pop();
                    }
                    else{
                        stk.push(s[i]);
                    }
                }
                else if(s[i] == ']'){
                    if(stk.top() == '['){
                        stk.pop();
                    }
                    else{
                        stk.push(s[i]);
                    }
                }
                else{
                    stk.push(s[i]);
                }
            }
        }
        
        if(stk.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};