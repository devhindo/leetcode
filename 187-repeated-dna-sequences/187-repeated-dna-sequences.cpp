class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>r;
        unordered_map<string,int>dnas;
        string q = s.substr(0,10);
        if(q.size() < 10) {
            return r;
        } else {
            dnas[q]++;
        }
        for(auto i=1; i<s.size()-9; i++) {
            q = s.substr(i,10);
            dnas[q]++;
        }
        for(auto dna : dnas) {
            if(dna.second > 1) r.push_back(dna.first);
        }
        return r;
        
    }
};