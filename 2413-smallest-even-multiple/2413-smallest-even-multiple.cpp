class Solution {
public:
    int smallestEvenMultiple(int n) {
        while(true) {
            if(n % 2 == 0)
                break;
            n *=2;
        }
        return n;
    }
};