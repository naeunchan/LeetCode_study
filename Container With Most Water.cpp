class Solution {
public:
    int maxArea(vector<int>& height) {
        int answer = 0;
        int i = 0, j = height.size() - 1;
        
        while(i < j){
            int area = min(height[i], height[j]) * (j - i);
            
            answer = max(answer, area);
            
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        
        return answer;
    }
};