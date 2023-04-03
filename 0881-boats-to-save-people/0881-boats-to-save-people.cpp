class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int s=0,e=people.size()-1,c=0;
        while(e>=0 && people[e]>=limit) { c++; e--; }
        while(s<=e) {
            if(people[s]+people[e]<=limit) {
                c++;
                s++;
                e--;
            } else if(s==e) {
                c++;
                s++;
                e--;
            }
            else {
                c++;
                e--;
            }
        }
        return c;
    }
};