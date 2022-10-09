class Solution {
public:
    int xorOperation(int n, int start) {
        int t = 0;
        for(int i=0; i<n; i++) {
            t ^= (start + 2 * i);
        }
        return t;
    }
};