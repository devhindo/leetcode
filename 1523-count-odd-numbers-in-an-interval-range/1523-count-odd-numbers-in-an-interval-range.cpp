class Solution {
public:
    int countOdds(int low, int high) {
        int a;
        bool odd1 = low%2!=0;
        bool odd2 = high%2!=0;
        if(!odd1 && !odd2) {
            a = (high-low)/2;
        } else {
            a = (high-low)/2 + 1;
        } 
        return a;
    }
};