class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);
        string z = y;
        int start = 0,end=y.length()-1;
        while(start<end) {
            swap(y[start],y[end]);
            start++;
            end--;
        }
        return z == y;
    }
};