class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int c=INT_MIN+1;
        for(auto n : nums) {
            int x = abs(n);
            int y = abs(c);
            if(x<y) {
                c = n;
            } else if(x==y) {
                c = max(n,c);
            }
        }
        return c;
    }
};