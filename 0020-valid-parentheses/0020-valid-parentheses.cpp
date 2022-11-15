class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        map<char,char>m = {
            {'(',')'},
            {'{','}'},
            {'[',']'}
        };
        for(char y : s) {
            if(m.find(y) != m.end()) {
                st.push(y);
            } else {
                if(!st.empty()) {
                    if(m[st.top()] == y) {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};