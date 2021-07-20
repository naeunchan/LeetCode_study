class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int answer = 0;
        int cnt = 0;
        map<int, int> m;
        
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        
        for(auto itr = m.begin(); itr != m.end(); itr++){
            if(cnt < itr->second){
                answer = itr->first;
                cnt = itr->second;
            }
        }
        
        return answer;
    }
};