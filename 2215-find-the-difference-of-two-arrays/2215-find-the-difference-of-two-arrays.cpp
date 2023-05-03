class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        set<int>s3,s4;
        for(auto& e : nums1) {
            if(s2.find(e)==s2.end()) {
                s3.insert(e);
            }
        }
        for(auto& e : nums2) {
            if(s1.find(e)==s1.end()) {
                s4.insert(e);
            }
        }
        vector<int>v1(s3.begin(),s3.end());
        vector<int>v2(s4.begin(),s4.end());
        return {v1,v2};
    }
};