class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>r;
        if(s.size() < 10) return r;
        unordered_map<string,int>dnas;
        for(auto i=0; i<s.size()-9; i++) {
            string q = s.substr(i,10);
            dnas[q]++;
            if(dnas[q] == 2) r.push_back(q);
            
        }
        return r;
    }
};