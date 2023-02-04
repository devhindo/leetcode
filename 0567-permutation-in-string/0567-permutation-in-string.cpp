class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        map<char,int>m1,m2;
        for(auto& c : s1) m1[c]++;
        for(int i=0; i<s1.size(); i++) m2[s2[i]]++;
        for(int i=s1.size(); i<s2.size(); i++) {
            if(m2==m1) return true;
            m2[s2[i-s1.size()]]--;
            if(!m2[s2[i-s1.size()]]) m2.erase(s2[i-s1.size()]);
            m2[s2[i]]++;
        }
        if(m2==m1) return true;
        return false;
    }
};