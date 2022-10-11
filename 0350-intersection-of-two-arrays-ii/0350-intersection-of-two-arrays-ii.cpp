class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>o;
        map<int,int>m;
        for(auto n : nums1) m[n]++;
        for(auto n : nums2) {
            if(m[n]) {
                o.push_back(n);
                m[n]--;
            }
        }
        return o;
    }
};