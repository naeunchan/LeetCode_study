class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        
        for(int i = 0; i < nums.size(); i++){
            long long min = nums[i];
            long long max = nums[i];
            
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[j] - max == 1){
                    max = nums[j];
                    i++;
                }
                else{
                    break;
                }
            }
            
            if(max - min){
                answer.push_back(to_string(min) + "->" + to_string(max));
            }
            else{
                answer.push_back(to_string(min));
            }
        }
        
        return answer;
    }
};