class Solution {
public:
    bool isSameAfterReversals(int num) {
        string r1 = to_string(num);
        if(r1.length() == 1) 
            return true;
        if(r1[0] == '0' || r1[r1.size()-1] == '0')
            return false;
        return true;
    }
};