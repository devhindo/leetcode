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
        double s=0,g,m;
        while(1) {
            m = (s+n)/2;
            g = guess(m);
            if(g==0) return m;
            else if(g==1) s=m+1;
            else n=m-1;
        }
        return -1;
    }
};