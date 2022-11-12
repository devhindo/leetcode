class Solution {
public:
    stack<char> ex(string &s) {
        stack<char>st;
        for(auto c : s) {
            if(c != '#') {
                st.push(c);
            } else {
                if(!st.empty()) 
                    st.pop();   
            }
        }
        return st;
    }
    bool backspaceCompare(string s, string t) {
        return ex(s) == ex(t);
    }
};