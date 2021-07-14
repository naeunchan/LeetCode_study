class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n * 2, 0);
        
        for(int i = 0; i < nums.size(); i++){
            answer[i] = nums[i];
            answer[i + n] = nums[i];
        }
        
        return answer;
    }
};