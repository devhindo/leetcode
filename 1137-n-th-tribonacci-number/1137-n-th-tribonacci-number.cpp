class Solution {
public:
    map<int,int>s;
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        if(s.find(n) != s.end()) return s[n];
        s[n]=tribonacci(n-3)+tribonacci(n-2)+tribonacci(n-1);
        return s[n];
    }
};