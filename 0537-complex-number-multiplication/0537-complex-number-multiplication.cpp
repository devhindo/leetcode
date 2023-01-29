class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int i=0,j=0;
        while(num1[i]!='+') i++;
        string sr1 = num1.substr(0,i);
        int r1 = stoi(sr1);
        string simg1 = num1.substr(++i,num1.size()-i-1);
        int img1 = stoi(simg1);
        while(num2[j]!='+') j++;
        string sr2 = num2.substr(0,j);
        int r2 = stoi(sr2);
        string simg2 = num2.substr(++j,num2.size()-j-1);
        int img2 = stoi(simg2);
        int r = r1*r2-img1*img2;
        int img = r1*img2+img1*r2;
        string n;
        n += to_string(r) + '+' + to_string(img) + 'i';
        return n;
    }
};