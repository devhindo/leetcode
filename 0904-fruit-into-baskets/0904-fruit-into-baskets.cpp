class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int>m;
        int s=0,e=0,mx=0;
        while(e<fruits.size()) {
            if(m.size() > 2) {
                int x = fruits[s];
                while(fruits[s]==x) {
                    s++;
                    m[x]--;
                }
                if(m[x]==0) m.erase(x);
            } else {
                m[fruits[e]]++;
                if(m.size()<=2) mx = max(mx,e-s+1);
                e++;
            }
        }
        return mx;
    }
};