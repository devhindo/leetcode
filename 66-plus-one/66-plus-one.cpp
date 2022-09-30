class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int toadd = 1;
        int lastdigit = digits.size()-1;
        while(toadd) {
           if(++digits[lastdigit] == 10) {
               digits[lastdigit] = 0;
           } else {
               break;
           }
           lastdigit--; 
           if(lastdigit == -1) {
               digits.insert(digits.begin(),1);
               break;
           } 
        }
        return digits;
    }
};