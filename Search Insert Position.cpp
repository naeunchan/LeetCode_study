class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int front = 0, back = nums.size() - 1;
        
        while(front <= back){
            int mid = (front + back) / 2;
            
            if(nums[mid] == target){
                return mid;
            }
            
            if(nums[mid] < target){
                front = mid + 1;
            }
            else{
                back = mid - 1;
            }
        }
        
        return front;
    }
};