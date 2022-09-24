class Solution {
public:
    string defangIPaddr(string address) {
        string d;
        for(int i=0; i<address.size(); i++) {
            if(address[i] == '.') {
                d.push_back('[');
                d.push_back(address[i]);
                d.push_back(']');
            } else {
                d.push_back(address[i]);
            }
        }
        return d;
    }
};