class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int f = 0;
        int l = 1;
        n--;
        int a;
        while(n--) {
            a = f+l;
            f = l;
            l = a;
        }
        return a;
    }
};