class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>m1,m2;
        for(auto c : word1) m1[c]++;
        for(auto c : word2) m2[c]++;
        if(word1.size() != word2.size() || m1.size() != m2.size()) return false;
        if(m1 == m2) return true;
        vector<int>w1,w2;
        for(int i=97; i<=122; i++) {
            char x = i;
            if(m1[x] == 0 && m2[x] != 0) return false;
            if(m2[x] == 0 && m1[x] != 0) return false;
            w1.push_back(m1[x]);
            w2.push_back(m2[x]);
        }
        sort(w1.begin(),w1.end());
        sort(w2.begin(),w2.end());
        return w1 == w2;
    }
};