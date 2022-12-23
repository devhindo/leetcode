class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       set<int>s(allowed.begin(),allowed.end());
       int c=0;
       for(auto w : words) {
           bool f = true;
           for(auto c : w) {
               if(s.find(c) == s.end()) {
                   f = false;
                   break;
               }
           }
           if(f) c++; 
       } 
       return c;
    }
};