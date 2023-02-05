class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>a;
        if(s.size()<p.size()) return a;
        map<char,int>m1,m2;
        for(auto& c : p) m1[c]++;
        for(int i=0; i<p.size(); i++) m2[s[i]]++;
        for(int i=p.size(); i<s.size(); i++) {
            if(m1==m2) {
                a.push_back(i-p.size());
            }
            m2[s[i-p.size()]]--;
            if(!m2[s[i-p.size()]]) m2.erase(s[i-p.size()]);
            m2[s[i]]++;
        }
        if(m1==m2) a.push_back(s.size()-p.size());
        return a;
    }
};