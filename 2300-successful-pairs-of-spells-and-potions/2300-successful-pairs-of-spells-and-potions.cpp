class Solution {
public:
    int co(int n, long long& suc, vector<int>& potions,map<int,int>&ans) {
        if(ans[n]) return ans[n];
        double f = (double) suc / (double) n;
        int s=0,e=potions.size()-1,m;
        if(potions[s]>f) return potions.size();
        if(potions[e]<f) return 0;
        while(s<=e) {
            m=(s+e)/2;
            if(potions[m]>f) e=m-1;
            else s=m+1;
        }
        if(potions[m]==f) {
            while(m-1>=0&&potions[m-1]==f) m--;
            return potions.size()-m;
        }
        while(potions[m]<f) m++;
        while(m-1>=0&&potions[m-1]==f) m--;
        return potions.size()-m;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(begin(potions),end(potions));
        vector<int>pairs(spells.size());
        map<int,int>ans;
        for(int i=0; i<spells.size(); i++) {
            pairs[i] = co(spells[i], success, potions,ans);
            ans[spells[i]] = pairs[i];
        }
        return pairs;
    }
};