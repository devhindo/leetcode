class Solution {
public:
    int add(int n) {
        string s = to_string(n);
        int num = 0;
        for(auto& c : s) {
            int x = c - '0';
            num += x;
        }
        return num;
    }
    int addDigits(int num) {
        while(num>9) num = add(num);
        return num;
    }
};