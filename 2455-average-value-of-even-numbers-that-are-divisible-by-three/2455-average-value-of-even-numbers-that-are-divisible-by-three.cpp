class Solution {
public:
    int averageValue(vector<int>& nums) {
        int c=0,con=0;
        for(auto n : nums) {
            if(n % 3 == 0 && n % 2 == 0) {
                con += n;
                c++;
            }
        }
        return c ? con/c : 0;
    }
};