class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int x=a.size()-1,y=b.size()-1,r=0;
        while(x>-1||y>-1 || r) {
            int z = r;
            if(x>=0) {
                int xx = a[x]-'0';
                z += xx;
            }
            if(y>=0) {
                int yy = b[y]-'0';
                z += yy;
            }
            if(z==2) {
                s.push_back('0');
                r=1;
            } else if(z==3) {
                s.push_back('1');
                r=1;
            } else if(z==1) {
                s.push_back('1');
                r=0;
            } else  {
                s.push_back('0');
            }
            x--,y--;
        }
        reverse(begin(s),end(s));
        return s;
    }
};