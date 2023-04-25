class Solution {
public:
    unordered_map<int,int>m;
    int fib(int n) {
        if(n == 0) return 0;
        if(m[n]) return m[n];
        if(n == 1) {
            m[n] = 1;
            return 1;
        }
        m[n] = fib(n-1) + fib(n-2);
        return m[n];
    }
};