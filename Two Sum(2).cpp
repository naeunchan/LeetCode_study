class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> answer(2, 0);
        
        for(int i = 0; i < numbers.size(); i++){
            int front = i + 1;
            int back = numbers.size() - 1;
            int diff = target - numbers[i];
            
            while(front <= back){
                int mid = (front + back) / 2;
                
                if(numbers[mid] == diff){
                    answer[0] = i + 1;
                    answer[1] = mid + 1;
                    
                    return answer;
                }
                else if(numbers[mid] < diff){
                    front = mid + 1;
                }
                else{
                    back = mid - 1;
                }
            }
        }
        
        return answer;
    }
};