class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<bool> check(2000001, false);
        vector<double> nums;
        
        for(int i = 0; i < nums1.size(); i++){
            nums.push_back(nums1[i]);  
        }
        
        for(int i = 0; i < nums2.size(); i++){
            nums.push_back(nums2[i]);
        }
        
        sort(nums.begin(), nums.end());
        
        if(nums.size() % 2){
            return nums[nums.size() / 2];
        }
        else{
            return (nums[nums.size() / 2] + (nums[(nums.size() / 2) - 1])) / 2;
        }
    }
};