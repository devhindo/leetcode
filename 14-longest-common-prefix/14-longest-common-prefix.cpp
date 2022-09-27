class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        unordered_map<string,int>prefix;
        string tmp = "";
        pair<string,int> longest("",0);
        for(string str : strs) {
            for(char c : str) {
                tmp.push_back(c);
                prefix[tmp]++;
            }
            tmp.clear();
        }
        for(auto itr = prefix.begin(); itr != prefix.end(); itr++) {
            if(itr->second == strs.size()) {
                if((itr->first).size() > longest.first.size()) 
                    longest.first = itr->first;
            }
        }
        return longest.first;
    }
};