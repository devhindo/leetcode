class Solution {
public:
    string combine(string s, int n) {
        string a;
        while(n) {
            a += s;
            n--;
        }
        return a;
    }
    string gcdOfStrings(string str1, string str2) {
        if(str1==str2) return str1;
        string a="",ans;
        int i=0,min,max;
        if(str1.size()<str2.size()) {
            swap(str1,str2);
        }
        min = str2.size();
        max = str1.size();
        while(str1[i]==str2[i]) {
            a.push_back(str1[i++]);
            if(max%a.size()==0 && min%a.size()==0) {
                if(combine(a,min/a.size())==str2 && combine(a,max/a.size())==str1) ans=a;
            }   
        }
        return ans;
    }
};