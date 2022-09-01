#include <string>
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str = to_string(num);
        int kBeauty=0,cur;
        string current = "";
        for(auto i=0; i<str.length(); i++) {
            current.push_back(str[i]);
            if(i>(k-2)) {
                cur = stoi(current);
                if((cur != 0) && ((num % cur == 0))) {
                    kBeauty++;
                }
                current.erase(0,1);
            }
        }
        return kBeauty;
    }
};