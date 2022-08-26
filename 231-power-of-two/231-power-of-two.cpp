class Solution {
public:
    bool isPowerOfTwo(int n) {
        int result = 0;
        while(pow(2,result) <= n) {
            if(pow(2,result) == n) {
                return true;
            }
            result = result+1;
        }
        return false;
    }
};