class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        int answer = 0;
        
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        
        for(auto itr = m.begin(); itr != m.end(); itr++){
            if(itr->second == 1){
                answer = itr->first;
                break;
            }
        }
        
        return answer;
    }
};