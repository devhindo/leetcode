class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int>s;
        for(int num : arr) {
            if(s.find(num*2) != s.end() || (num % 2 == 0) && s.find(num/2) != s.end()) {
                return true;
            } else {
                s.insert(num);
            }
        }
        return false;
    }
};