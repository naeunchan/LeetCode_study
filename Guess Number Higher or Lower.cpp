/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int front = 1, back = n;
        
        while(front <= back){
            int mid = front + (back - front) / 2;
            
            if(guess(mid) < 0){
                back = mid - 1;
            }
            else if(guess(mid) > 0){
                front = mid + 1;
            }
            else{
                return mid;
            }
        }
        
        return front;
    }
};