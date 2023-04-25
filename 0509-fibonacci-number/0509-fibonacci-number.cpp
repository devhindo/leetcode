class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        int f;
        if(n<=2) f=1;
        else return f=fib(n-1)+fib(n-2);
        return f;
    }
};