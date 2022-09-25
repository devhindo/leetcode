class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        int i=0;
        for(; i<s.size(); i++) {
            if(s[i] == '6') {
                s[i] = '9';
                break;
            }
        }
        stringstream r;
        r << s;
        r >> num;
        return num;
    }
};