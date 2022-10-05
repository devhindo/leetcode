class Solution {
public:
    int fib(int n, unordered_map<int,int> *m = new unordered_map<int,int>()) {
        // Dynamic Programming #1 :)
        if((*m).find(n) != (*m).end()) return (*m)[n];
        if(n == 0) return 0;
        if(n == 1) return 1;
        (*m)[n] = fib(n-1,m) + fib(n-2,m);
        return (*m)[n];
    }
};