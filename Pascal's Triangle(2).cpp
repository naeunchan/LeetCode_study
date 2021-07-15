class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> answer;
        
        for(int i = 0; i <= rowIndex; i++){
            vector<int> v(i + 1, 1);
            
            for(int j = 1; j < v.size() - 1; j++){
                v[j] = answer[i - 1][j - 1] + answer[i - 1][j];
            }
            
            answer.push_back(v);
        }
        
        return answer[rowIndex];
    }
};