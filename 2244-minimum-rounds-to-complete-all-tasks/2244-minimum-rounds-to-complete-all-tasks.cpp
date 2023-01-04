class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>m;
        int c=0;
        for(auto t : tasks) m[t]++;
        for(auto& t : m) {
            if(t.second==1) return -1;
            else if(t.second==2) c++;
            else if(t.second%3==0) c += t.second/3;
            else {
                c += (t.second-4)/3;
                c += 2;
            } 
        }
        return c;
    }
};