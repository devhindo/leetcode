class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>x;
        x.insert(x.end(),nums1.begin(),nums1.end());
        x.insert(x.end(),nums2.begin(),nums2.end());
        sort(x.begin(),x.end());
        double m;
        int a,b;
        a = nums1.size();
        b = nums2.size();
        if(x.size() % 2 == 0) {
            double f1 = x[(a+b)/2];
            double f2 = x[((a+b)/2)-1];
            m = (f1+f2)/2;
        } else {
            m = x[(a+b)/2];
        }
        return m;
    }
};