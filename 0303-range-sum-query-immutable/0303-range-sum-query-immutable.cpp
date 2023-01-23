class NumArray {
public:
    vector<int>p;
    NumArray(vector<int>& nums) {
        p.push_back(0);
        for(int i=0; i<nums.size(); i++) {
            p.push_back(p[i]+nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        return p[right+1]-p[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */