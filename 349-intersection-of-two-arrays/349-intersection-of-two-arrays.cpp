class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
        for(int n : nums1) s1.insert(n);
        for(int n : nums2) s2.insert(n);
        vector<int>i;
        for(auto itr = s1.begin(); itr != s1.end(); itr++) {
            if(s2.find(*itr) != s2.end()) i.push_back(*itr);
        }
        return i;     
    }
};