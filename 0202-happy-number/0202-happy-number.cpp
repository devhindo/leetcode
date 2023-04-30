class Solution {
public:
    bool isLoop(int& n,set<int>& st) {
        if(st.find(n)!= st.end()) {
            return false;
        } else {
            st.insert(n);
        }
        string s = to_string(n);
        int c = 0;
        for(auto& d : s) {
            int x = d - '0';
            c += (x*x);
        }
        if(c!=n) {
            n=c;
            return true;
        } 
        return false;
    }
    bool isHappy(int n) {
        set<int>s;
        while(isLoop(n,s));
        return n==1 ? true : false;
    }
};