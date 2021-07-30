class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool> check(nums.size() + 1, false);
        int len = nums.size();
        
        for(int i = 0; i < len; i++){
            check[nums[i]] = true;
        }
        
        for(int i = 0; i < check.size(); i++){
            if(!check[i]){
                return i;
            }
        }
        
        return 0;
    }
};