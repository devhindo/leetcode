class Solution {
public:
    int myAtoi(string s) {
        string n;
        bool neg = false;
        int j=0;
        while(s[j] == ' ') {
            j++;
        }
        if(s[j] == '-') {
            neg=true;
            j++;
        } else if(s[j] == '+') {
            j++;
        }
        while(isdigit(s[j])) {
            if(n.empty() && s[j]=='0') {
                j++;
                continue;
            }
            n.push_back(s[j]);
            j++;
        }
        string maxInt = "2147483647";
        bool out = false;
        if(n.size() >= maxInt.size()) {
            if(n.size() == maxInt.size()) {
                for(int i=0; i<n.size(); i++) {
                    if(n[i] == maxInt[i]) {
                        continue;
                    } else if(n[i] < maxInt[i]) {
                        break;
                    }
                    else {
                        out = true;
                        break;
                    }
                }
                if(out) return neg ? INT_MIN : INT_MAX;
            } else {
                return neg ? INT_MIN : INT_MAX;
            }
        }
        int num=0;
        for(int i=0; i<n.size(); i++) {
            int tmp = n[i]-'0';
            num += tmp * pow(10,(n.size()-i-1));
        }
        return neg ? -num : num;
    }
};