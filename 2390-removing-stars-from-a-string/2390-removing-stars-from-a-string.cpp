class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(auto& c : s) {
            if(c!='*') st.push(c);
            else st.pop();
        }
        string a = "";
        while(!st.empty()) {
            a.push_back(st.top());
            st.pop();
        }
        reverse(begin(a),end(a));
        return a;
    }
};