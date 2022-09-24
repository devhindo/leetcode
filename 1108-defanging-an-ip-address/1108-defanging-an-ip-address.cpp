class Solution {
public:
    string defangIPaddr(string address) {
        string d = "";
        for(int i=0; i<address.size(); i++) {
            if(address[i] == '.') {
                d += "[.]";
            } else {
                d.push_back(address[i]);
            }
        }
        return d;
    }
};