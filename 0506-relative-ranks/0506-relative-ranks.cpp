class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>p;
        for(int i=0; i<score.size(); i++) {
            p.push(make_pair(score[i],i));
        }
        int i=1;
        vector<string>r(score.size());
        while(!p.empty()) {
            string rank;
            if(i==1) {
                rank = "Gold Medal";
            } else if(i==2) {
                rank = "Silver Medal";
            } else if(i==3) {
                rank = "Bronze Medal";
            } else {
                rank = to_string(i);
            }
            r[p.top().second] = rank;
            i++;
            p.pop();
        }
        return r;
    }
};