class Solution {
public:
    double average(vector<int>& salary) {
        int l=INT_MAX,h=INT_MIN;
        double t = 0;
        for(int i=0; i<salary.size(); i++) {
            h = max(h,salary[i]);
            l = min(l,salary[i]);
            t += salary[i];
        }
        t -= l;
        t -= h;
        t /= (salary.size()-2);
        return t;
    }
};