class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int>m;
        for(int i=0; i<order.size(); i++) {
            m[order[i]] = i;
        }
        for(int i=0; i<words.size()-1; i++) {
            int l = min(words[i].size(),words[i+1].size());
            bool ok = false;
            for(int j=0; j<l; j++) {
                if(m[words[i][j]]>m[words[i+1][j]]) return false;
                else if(m[words[i][j]] < m[words[i+1][j]]) {
                    ok = true;
                    break;
                }
            }
            if(!ok) if(words[i].size()>words[i+1].size()) return false;
        }
        return true;
    }
};