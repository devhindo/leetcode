class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int>s;
        queue<int>q;
        map<int,int>m;
        for(int i=students.size()-1; i>=0; i--) {
            q.push(students[i]);
            m[students[i]]++;
        }
        for(int i=sandwiches.size()-1; i>=0; i--) s.push(sandwiches[i]);
        while(!q.empty() && !(m[0]==0 && s.top()==0 && q.front() != 0) && !(m[1]==0 && s.top()==1 && q.front() != 1)){
            if(q.front() == s.top()) {
                m[q.front()]--;
                q.pop();
                s.pop();
                
            } else {
                bool x = q.front();
                q.pop();
                q.push(x);
            }
        }
        return q.size();
        
    }
};