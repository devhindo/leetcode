class Solution {
public:
    int smallestEvenMultiple(int n) {
        while(true) {
            if(n % 2 == 0)
                return n;
            n *=2;
        }
        return n;
    }
};