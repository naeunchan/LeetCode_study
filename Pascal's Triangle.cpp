class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        
        for(int i = 1; i <= numRows; i++){
            vector<int> v(i, 1);
            
            for(int j = 1; j < v.size() - 1; j++){
                v[j] = answer[i - 2][j - 1] + answer[i - 2][j];
            }
            
            answer.push_back(v);
        }
        
        return answer;
    }
};