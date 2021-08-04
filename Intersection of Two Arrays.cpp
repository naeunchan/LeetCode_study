class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        vector<bool> check(1001, false);
        
        for(int i = 0; i < nums1.size(); i++){
            check[nums1[i]] = true;
        }
        
        for(int i = 0; i < nums2.size(); i++){
            if(check[nums2[i]]){
                answer.push_back(nums2[i]);
                check[nums2[i]] = false;
            }
        }
        
        return answer;
    }
};