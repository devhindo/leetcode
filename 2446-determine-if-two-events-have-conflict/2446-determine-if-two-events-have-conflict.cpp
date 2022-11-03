class Solution {
public:
    int tosec(string s) {
        int h = stoi(s.substr(0,2));
        int m = stoi(s.substr(3,2));
        return h*60+m;
    }
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        pair<int,int>e1 = { tosec(event1[0]),tosec(event1[1]) };  
        pair<int,int>e2 = { tosec(event2[0]),tosec(event2[1]) };
        return ((e2.first <= e1.second) && (e1.second <= e2.second)) || ((e2.first <= e1.first) &&               (e1.first <= e2.second)) || ((e1.first <= e2.first) && (e2.first <= e1.second)) || ((e1.first <=         e2.second) && (e2.second <= e1.second));
    }
};