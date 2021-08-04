class Solution {
public:
    bool isPerfectSquare(int num) {
        int front = 1;
        int back = num;
        
        while(front <= back){
            int mid = front + (back - front) / 2;
            
            if(mid == (double)num / (double)mid){
                return true;
            }
            else if(num / mid > mid){
                front = mid + 1;
            }
            else{
                back = mid - 1;
            }
        }
        
        return false;
    }
};