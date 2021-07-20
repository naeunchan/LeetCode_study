class Solution {
public:
    string intToRoman(int num) {
        map<int, string> m;
        string answer = "";
        vector<int> keys = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        
        m[1] = "I";
        m[4] = "IV";
        m[5] = "V";
        m[9] = "IX";
        m[10] = "X";
        m[40] = "XL";
        m[50] = "L";
        m[90] = "XC";
        m[100] = "C";
        m[400] = "CD";
        m[500] = "D";
        m[900] = "CM";
        m[1000] = "M";
        
        while(num > 0){
            bool check = false;
            
            for(int i = 0; i < keys.size(); i++){
                if(i + 1 < keys.size() && num >= keys[i] && num < keys[i + 1]){
                    answer += m[keys[i]];
                    num -= keys[i];
                    check = true;
                    break;
                }
            }
            
            if(!check){
                answer += "M";
                num -= 1000;
            }
        }
        
        return answer;
    }
};