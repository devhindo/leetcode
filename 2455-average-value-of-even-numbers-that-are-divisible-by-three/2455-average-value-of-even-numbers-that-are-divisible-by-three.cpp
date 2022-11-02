class Solution {
public:
    int averageValue(vector<int>& nums) {
        int c=0,con=0;
        for(auto n : nums) {
            if(n && n % 3 == 0 && n % 2 == 0) {
                con += n;
                c++;
            }
        }
        if(!c) return 0;
        return con/c;
    }
};