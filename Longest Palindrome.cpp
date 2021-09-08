class Solution {
public:
    int longestPalindrome(string s) {
        int answer = 0;
        vector<int> odd;
        map<char, int> m;
        
        cout << s.size() << endl;
        
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        
        for(auto itr = m.begin(); itr != m.end(); itr++){
            if(itr->second % 2){
                odd.push_back(itr->second);
            } else{
                answer += itr->second;
            }
        }
        
        if(!odd.empty()){
            sort(odd.begin(), odd.end());
            
            for(int i = 0; i < odd.size() - 1; i++){
                answer += odd[i] - 1;
            }
            answer += odd.back();
        }
        
        return answer;
    }
};