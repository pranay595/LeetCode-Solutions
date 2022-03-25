/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int st = 0;
        int end = n;
        
        while(st<end){
            int mid = st + (end-st)/2;
            
            int guessValue = guess(mid);
            if(guessValue==0)
                return mid;
            if(guessValue==-1)
                end = mid;
            else
                st = mid+1;
                
        }
        return st;
    }
};