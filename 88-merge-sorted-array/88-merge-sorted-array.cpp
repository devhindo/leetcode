class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>sor;
        int st1=0,st2=0;
        while(st1 < m && st2 < n) {
            if(nums1[st1] < nums2[st2]) {
                sor.push_back(nums1[st1++]);
            } else {
                sor.push_back(nums2[st2++]);
            }
        }
        if(st1 < m) {
            while(st1 < m) {
                sor.push_back(nums1[st1]);
                st1++;
            }
        }
        if(st2 < n) {
            while(st2 < n) {
                sor.push_back(nums2[st2]);
                st2++;
            }
        }
        nums1 = sor;
    }
};