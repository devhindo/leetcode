class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>m;
        for(auto& s : arr) m[s]++;
        string d = "";
        for(auto& s : arr) {
            if(m[s] == 1) {
                k--;
                if(!k) return s;
            }
        }
        return d;
    }
};