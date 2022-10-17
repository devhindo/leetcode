class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>s;
        const char letters[] = "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < 26; ++i)
            s.insert(letters[i]);
        for(char c : sentence) {
            s.erase(c);
            if(s.empty()) return true;
        }
        return false;
    }
};