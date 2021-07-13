class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        
        for(int i = 0; i < nums1.size(); i++){
            if(m > 0){
                m--;
                v.push_back(nums1[i]);
            }
            else{
                break;
            }
        }
        
        for(int i = 0; i < nums2.size(); i++){
            if(n > 0){
                n--;
                v.push_back(nums2[i]);
            }
            else{
                break;
            }
        }
        
        sort(v.begin(), v.end());
        nums1 = v;
    }
};