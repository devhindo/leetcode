class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>a=nums;
        sort(begin(nums),end(nums));
        for(int i=0; i<a.size(); i++) {
            int l=0,r=nums.size()-1,m;
            while(l<=r) {
                m=(l+r)/2;
                if(nums[m]==a[i]) break;
                else if(nums[m]>a[i]) r=m-1;
                else {l=m+1;}
            }
            while(m!=0 && nums[m-1]==a[i]) m--;
            a[i]=m;
        }
        return a;
    }
};