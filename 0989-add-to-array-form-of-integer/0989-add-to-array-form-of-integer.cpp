class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string s = to_string(k);
        int i=num.size()-1;
        int j=s.size()-1;
        int r=0;
        int z=i;
        while(i>=0||j>=0||r) {
            int x=0;
            if(j>=0) {
                x += (s[j] - '0');
            }
            if(i>=0) {
                x += num[i];
            }
            while(r) {
                x++;
                r--;
            } 
            if(x>9) {
                r++;
                x -= 10;
            }
            if(z>=0) {
                num[z] = x;
                z--;
            } else {
                num.insert(num.begin(),x);
            }
            i--;
            j--;
        }
        return num;
    }
};