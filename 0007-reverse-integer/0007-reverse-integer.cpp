class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        bool neg = false;
        if(s[0] == '-') {
            neg=true;
            s.erase(0,1);
        }
        int start=0,end=s.size()-1;
        while(start<end) {
            swap(s[start],s[end]);
            start++;
            end--;
        }
        string min = "2147483648"; // 2148
        string max = "2147483647";
        if(s.size() > min.size()) {
            return 0;
        } else if(s.size()==min.size()) {
            string val = neg ? min : max;
            for(int i=0; i<val.size(); i++) {
                if(s[i] > val[i]) {
                    return 0;
                } else if(s[i] < val[i]) {
                    break;
                }
            }     
        } 
        int num=0;
        for(int i=0; i<s.size(); i++) {
            int n = s[i] - '0';
            num += n*pow(10,s.size()-1-i);
        }
        return neg ? -num : num;
    }
};