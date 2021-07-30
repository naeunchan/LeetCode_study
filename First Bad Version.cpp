// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long front = 0, back = n;
        
        while(front <= back){
            long long mid = (front + back) / 2;
            
            if(!isBadVersion(mid)){
                front = mid + 1;
            }
            else{
                back = mid - 1;
            }
        }
        
        return front;
    }
};