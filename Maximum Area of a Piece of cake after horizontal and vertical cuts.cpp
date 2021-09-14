class Solution {
public:
    void getMaxDiff(vector<int> v, int start, int end, long long &diff, int length){
        for(int i = 1; i < v.size(); i++){
            int tmpStart = v[i - 1];
            int tmpEnd = v[i];
            int tmpDiff = tmpEnd - tmpStart;
            
            if(diff < tmpDiff){
                diff = tmpDiff;
                start = tmpStart;
                end = tmpEnd;
            }
        }
        
        diff = diff < length - v.back() ? length - v.back() : diff;
    }
    
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        const int MOD = 1000000007;
        long long answer = 0;
        long long rowDiff = 0;
        long long colDiff = 0;
        
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        rowDiff = horizontalCuts[0];
        colDiff = verticalCuts[0];
        
        getMaxDiff(horizontalCuts, 0, horizontalCuts[0], rowDiff, h);
        getMaxDiff(verticalCuts, 0, verticalCuts[0], colDiff, w);
        
        answer = (rowDiff * colDiff) % MOD;
        
        return answer;
    }
};