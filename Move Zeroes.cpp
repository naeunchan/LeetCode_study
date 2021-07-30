class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        stack<int> stk;
        int cnt = 0;
        
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i] != 0){
                stk.push(nums[i]);
            }
            else{
                cnt++;
            }
            
            nums.pop_back();
        }
        
        while(!stk.empty()){
            nums.push_back(stk.top());
            stk.pop();
        }
        
        while(cnt--){
            nums.push_back(0);
        }
    }
};